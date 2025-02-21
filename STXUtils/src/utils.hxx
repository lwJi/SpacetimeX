#ifndef SPACETIMEX_STXUTILS_HXX
#define SPACETIMEX_STXUTILS_HXX

#include <functional>
#include <loop_device.hxx>

namespace STXUtils {

template <typename T, size_t N, typename F>
constexpr std::array<T, N> make_array(F &&lambda) {
  static_assert(N <= 1024, "Array size too large for practical use");

  auto expand = [&lambda]<size_t... Is>(std::index_sequence<Is...>) noexcept(
                    noexcept(std::array<T, N>{lambda(Is)...})) {
    return std::array<T, N>{lambda(Is)...};
  };

  return expand(std::make_index_sequence<N>{});
}

template <typename T> struct GF3D5Factory {
  using GFType = Loop::GF3D5<T>;

  // Public function pointers for generated functions
  std::function<GFType()> make_gf;
  std::function<std::array<GFType, 3>()> make_vec_gf;
  std::function<std::array<GFType, 6>()> make_smat_gf;
  std::function<std::array<std::array<GFType, 3>, 3>()> make_vec_vec_gf;
  std::function<std::array<std::array<GFType, 6>, 3>()> make_vec_smat_gf;
  std::function<std::array<std::array<GFType, 3>, 6>()> make_smat_vec_gf;
  std::function<std::array<std::array<GFType, 6>, 6>()> make_smat_smat_gf;

  // Constructor to initialize the lambdas
  GF3D5Factory(const Loop::GF3D5layout &layout5, int ntmps, int &itmp)
      : tmps(layout5, ntmps), itmp_ref(itmp) {
    make_gf = [this]() noexcept { return create_gf(); };
    make_vec_gf = [this]() noexcept { return create_vec(make_gf); };
    make_smat_gf = [this]() noexcept { return create_smat(make_gf); };
    make_vec_vec_gf = [this]() noexcept { return create_vec(make_vec_gf); };
    make_vec_smat_gf = [this]() noexcept { return create_vec(make_smat_gf); };
    make_smat_vec_gf = [this]() noexcept { return create_smat(make_vec_gf); };
    make_smat_smat_gf = [this]() noexcept { return create_smat(make_smat_gf); };
  }

private:
  // Private members
  Loop::GF3D5vector<T> tmps;
  int &itmp_ref; // Reference to the external temporary index

  // Generates a single grid function
  GFType create_gf() const noexcept { return GFType(tmps(itmp_ref++)); }

  // Helper functions for generating vectors and symmetric matrices
  template <typename Func> auto create_vec(const Func &f) const noexcept {
    return make_array<std::invoke_result_t<Func>, 3>(
        [&](int /*unused*/) { return std::invoke(f); });
  }

  template <typename Func> auto create_smat(const Func &f) const noexcept {
    return make_array<std::invoke_result_t<Func>, 6>(
        [&](int /*unused*/) { return std::invoke(f); });
  }
};

template <int CI, int CJ, int CK>
inline Loop::GF3D5layout get_GF3D5layout(const cGH *restrict const cctkGH) {
  Arith::vect<int, Loop::dim> imin, imax;
  Loop::GridDescBase(cctkGH).box_int<CI, CJ, CK>({cctkGH->cctk_nghostzones[0],
                                                  cctkGH->cctk_nghostzones[1],
                                                  cctkGH->cctk_nghostzones[2]},
                                                 imin, imax);
  return Loop::GF3D5layout(imin, imax);
}

} // namespace STXUtils

#endif // #ifndef SPACETIMEX_STXUTILS_HXX
