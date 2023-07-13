#include "../s21_math.h"

long double s21_ceil(double x) {
  long double res = (int)x;
  if (x != x) res = S21_NAN;
  if (x == S21_INF || x == -S21_INF) res = x;

  if (x > 0 && res < x) {
    x = x + 1;
    res = (int)x;
  }
  return res;
}
