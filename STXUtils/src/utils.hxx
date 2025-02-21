#ifndef SPACETIMEX_STXUTILS_HXX
#define SPACETIMEX_STXUTILS_HXX

#include <functional>
#include <loop_device.hxx>

namespace STXUtils {

//// Generic utility to create std::array with a callable (C++20 compatible)
// template <typename T, size_t N, typename F>
// constexpr std::array<T, N> make_array(F &&lambda) {
//   static_assert(N <= 1024, "Array size too large for practical use");
//
//   auto expand = [&lambda]<size_t... Is>(std::index_sequence<Is...>) noexcept(
//                     noexcept(std::array<T, N>{lambda(Is)...})) {
//     return std::array<T, N>{lambda(Is)...};
//   };
//
//   return expand(std::make_index_sequence<N>{});
// }

// Generic utility to create std::array with a callable (C++17 compatible)
template <typename T, size_t N, typename F, size_t... Is>
constexpr std::array<T, N>
expand_helper(F &&lambda, std::index_sequence<Is...>) noexcept(
    noexcept(std::array<T, N>{lambda(Is)...})) {
  return std::array<T, N>{lambda(Is)...};
}

template <typename T, size_t N, typename F>
constexpr std::array<T, N> make_array(F &&lambda) {
  static_assert(N <= 1024, "Array size too large for practical use");
  return expand_helper<T, N>(std::forward<F>(lambda),
                             std::make_index_sequence<N>{});
}

// GF3D5Factory Class
template <typename T> class GF3D5Factory {
public:
  using GFType = Loop::GF3D5<T>;

  // Type aliases for clarity
  using VecGF = std::array<GFType, 3>;
  using SmatGF = std::array<GFType, 6>;
  using VecVecGF = std::array<VecGF, 3>;
  using VecSmatGF = std::array<SmatGF, 3>;
  using SmatVecGF = std::array<VecGF, 6>;
  using SmatSmatGF = std::array<SmatGF, 6>;

  // Public function pointers for generated functions
  std::function<GFType()> make_gf;
  std::function<VecGF()> make_vec_gf;
  std::function<SmatGF()> make_smat_gf;
  std::function<VecVecGF()> make_vec_vec_gf;
  std::function<VecSmatGF()> make_vec_smat_gf;
  std::function<SmatVecGF()> make_smat_vec_gf;
  std::function<SmatSmatGF()> make_smat_smat_gf;

  // Constructor to initialize the lambdas
  GF3D5Factory(const Loop::GF3D5layout &layout5, int ntmps, int &itmp)
      : tmps_(layout5, ntmps), itmp_ref_(itmp) {
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
  Loop::GF3D5vector<T> tmps_;
  int &itmp_ref_; // Reference to the external temporary index

  // Generates a single grid function
  [[nodiscard]] GFType create_gf() const noexcept {
    return GFType(tmps_(itmp_ref_++));
  }

  // Helper functions for generating vectors and symmetric matrices
  template <typename Func>
  [[nodiscard]] auto create_vec(const Func &f) const noexcept {
    return make_array<std::invoke_result_t<Func>, 3>(
        [&](size_t /*unused*/) { return std::invoke(f); });
  }

  template <typename Func>
  [[nodiscard]] auto create_smat(const Func &f) const noexcept {
    return make_array<std::invoke_result_t<Func>, 6>(
        [&](size_t /*unused*/) { return std::invoke(f); });
  }
};

// Get GF3D5layout
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
