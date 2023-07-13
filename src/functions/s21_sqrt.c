#include "../s21_math.h"

long double s21_sqrt(double n) {
  long double res = n / 2;

  if (n < 0)
    res = S21_NAN;
  else if (n == S21_INF)
    res = S21_INF;
  else if (n == 0)
    res = 0;
  else {
    while (s21_fabs(res * res - n) > S21_EPS) res = (res + (n / res)) / 2;
  }

  return res;
}
