#include "../s21_math.h"

long double s21_exp(double n) {
  long double res = 1.0;
  long double temp = 1.0;

  if (n == -S21_INF)
    res = 0;
  else
    for (int i = 1; s21_fabs(temp) > S21_EPS; ++i) {
      temp *= n / i;
      res += temp;
      if (res > S21_MAX) {
        res = S21_INF;
        break;
      }
    }

  return res;
}
