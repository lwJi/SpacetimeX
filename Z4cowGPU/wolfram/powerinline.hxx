#ifndef POWERINLINE_HXX
#define POWERINLINE_HXX

#include <loop_device.hxx>

#include <array>
#include <cmath>
#include <type_traits>

namespace Z4cowGPU {

template <typename T> constexpr T Power(T base, int exp) {
  static_assert(std::is_arithmetic<T>::value,
                "Power function only supports arithmetic types.");

  if constexpr (std::is_floating_point<T>::value) {
    return std::pow(base, exp); // Use std::pow for floating-point types
  } else {
    if (exp < 0) {
      return static_cast<T>(1) /
             Power(
                 base,
                 -exp); // Handle negative exponent for non-floating point types
    }
    T result = 1;
    while (exp) {
      if (exp % 2)
        result *= base;
      base *= base;
      exp /= 2;
    }
    return result;
  }
}

} // namespace Z4cowGPU

#endif // #ifndef POWERINLINE_HXX
