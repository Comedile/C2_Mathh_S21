#include "../s21_math.h"

long double s21_acos(double n) {
  long double res = 0;
  if (n != n) res = S21_NAN;
  if (n == 1) res = 0;
  if (n == 0) res = S21_PI / 2;
  if (n == -1) res = S21_PI;
  if (n < -1 || n > 1)
    res = S21_NAN;
  else {
    if (n > 0.0 && n < 1.0) res = s21_atan(s21_pow((1 - n * n), 0.5) / n);
    if (n > -1.0 && n < 0.0)
      res = S21_PI + s21_atan(s21_pow((1 - n * n), 0.5) / n);
  }

  return res;
}
