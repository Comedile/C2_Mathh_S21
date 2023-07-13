#include "../s21_math.h"

long double s21_floor(double n) {
  long double res = (int)n;
  if (n != n) res = n;
  if (n == S21_INF || n == -S21_INF) res = n;

  if (n < 0 && res > n) {
    n = n - 1;
    res = (int)n;
  }
  return res;
}
