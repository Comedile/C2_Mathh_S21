#include "../s21_math.h"

long double s21_pow(double base, double exponent) {
  double res = 1;

  if (base == 0.0 && (exponent <= -1.0 || exponent == -S21_INF)) {
    res = S21_INF;
  } else if (base == -1.0 && exponent == -1.0) {
    res = -1;
  } else if ((base == 1.0 || base == -1.0) &&
             (exponent == -S21_INF || exponent == S21_INF)) {
    res = 1;
  } else if ((base == 1.0) && (exponent != exponent)) {
    res = base;
  } else if (exponent == 0.0) {
    res = 1.0;
  } else if (base == 0.0 && exponent < 0.0) {
    res = S21_INF;
  } else {
    if ((exponent == (int)exponent) && (exponent > 0)) {
      for (int i = 0; i < exponent; i++) res *= base;

    } else {
      res = s21_exp(exponent * s21_log(s21_fabs(base)));

      if (base < 0.0 && s21_fabs(s21_fmod(exponent, 2.0)) == 1.0) {
        res = -res;
      }
    }
  }

  return res;
}
