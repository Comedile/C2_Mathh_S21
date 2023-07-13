#include "../s21_math.h"

long double s21_log(double x) {
  double res = 0.0;
  long double ex_pow = 0;
  long double tmp = 0;
  int i;

  if (x < 0.0 || x == -S21_NAN) {
    res = -S21_NAN;
  } else if (x == 0.0) {
    res = -S21_INF;
  } else if (x == S21_INF) {
    res = S21_INF;
  } else {
    for (; x >= S21_E; x /= S21_E, ex_pow++) continue;

    for (i = 0; i < 100; i++) {
      tmp = res;
      res = tmp + 2 * (x - s21_exp(tmp)) / (x + s21_exp(tmp));
    }
  }

  res = res + ex_pow;

  return res;
}
