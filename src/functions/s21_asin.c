#include "../s21_math.h"

long double s21_asin(double n) {
  long double res = 0;
  if (n != n) res = -S21_NAN;
  if (n == 1) res = S21_PI / 2;
  if (n == -1) res = -S21_PI / 2;
  if (n < -1 || n > 1)
    res = S21_NAN;
  else {
    res = s21_atan(n / s21_pow(1 - n * n, 0.5));
  }

  return res;
}
