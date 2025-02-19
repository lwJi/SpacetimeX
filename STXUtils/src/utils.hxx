#ifndef SPACETIMEX_STXUTILS_HXX
#define SPACETIMEX_STXUTILS_HXX

#include <functional>
#include <loop_device.hxx>
#include <mat.hxx>
#include <vec.hxx>

namespace STXUtils {
using namespace Arith;

template <typename T> struct GF3D5Factory {
  using GFType = Loop::GF3D5<T>;

  // Public function pointers for generated functions
  std::function<GFType()> make_gf;
  std::function<vec<GFType, 3>()> make_vec_gf;
  std::function<smat<GFType, 3>()> make_smat_gf;
  std::function<vec<vec<GFType, 3>, 3>()> make_vec_vec_gf;
  std::function<vec<smat<GFType, 3>, 3>()> make_vec_smat_gf;
  std::function<smat<vec<GFType, 3>, 3>()> make_smat_vec_gf;
  std::function<smat<smat<GFType, 3>, 3>()> make_smat_smat_gf;
  std::function<vec<smat<vec<GFType, 3>, 3>, 3>()> make_vec_smat_vec_gf;
  std::function<vec<vec<vec<GFType, 3>, 3>, 3>()> make_vec_vec_vec_gf;

  // Constructor to initialize the lambdas
  GF3D5Factory(const Loop::GF3D5layout &layout5, int ntmps, int &itmp)
      : tmps(layout5, ntmps), itmp_ref(itmp) {
    make_gf = [this]() { return create_gf(); };
    make_vec_gf = [this]() { return create_vec(make_gf); };
    make_smat_gf = [this]() { return create_smat(make_gf); };
    make_vec_vec_gf = [this]() { return create_vec(make_vec_gf); };
    make_vec_smat_gf = [this]() { return create_vec(make_smat_gf); };
    make_smat_vec_gf = [this]() { return create_smat(make_vec_gf); };
    make_smat_smat_gf = [this]() { return create_smat(make_smat_gf); };
    make_vec_smat_vec_gf = [this]() { return create_vec(make_smat_vec_gf); };
    make_vec_vec_vec_gf = [this]() { return create_vec(make_vec_vec_gf); };
  }

private:
  // Private members
  Loop::GF3D5vector<T> tmps;
  int &itmp_ref; // Reference to the external temporary index

  // Generates a single grid function
  GFType create_gf() const { return GFType(tmps(itmp_ref++)); }

  // Helper functions for generating vectors and symmetric matrices
  template <typename Func> auto create_vec(const Func &f) const {
    using ReturnType = typename std::invoke_result_t<Func>;
    return vec<ReturnType, 3>([&](int) { return f(); });
  }

  template <typename Func> auto create_smat(const Func &f) const {
    using ReturnType = typename std::invoke_result_t<Func>;
    return smat<ReturnType, 3>([&](int, int) { return f(); });
  }
};

template <int CI, int CJ, int CK>
inline Loop::GF3D5layout get_GF3D5layout(const cGH *restrict const cctkGH) {
  const array<int, Loop::dim> nghostzones = {cctkGH->cctk_nghostzones[0],
                                             cctkGH->cctk_nghostzones[1],
                                             cctkGH->cctk_nghostzones[2]};
  vect<int, Loop::dim> imin, imax;
  Loop::GridDescBase(cctkGH).box_int<CI, CJ, CK>(nghostzones, imin, imax);
  return Loop::GF3D5layout(imin, imax);
}

} // namespace STXUtils

#endif // #ifndef SPACETIMEX_STXUTILS_HXX
