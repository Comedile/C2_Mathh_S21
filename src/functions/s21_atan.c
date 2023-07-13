#include "../s21_math.h"

long double s21_atan(double n) {
  long double res = 0;
  if (n != n) {
    res = -S21_NAN;
  } else if (n == -S21_INF) {
    res = -S21_PI / 2;
  } else if ((n > 1.0 - S21_EPS) && (n < 1.0 + S21_EPS)) {
    res = S21_PI / 4;

  } else if ((n > -1.0 - S21_EPS) && (n < -1.0 + S21_EPS)) {
    res = -S21_PI / 4;

  } else if (n > -1.0 && n < 1.0) {
    res = n;
    int k = -1;
    long double temp = n;
    for (int i = 3; i < 7000; i = i + 2) {
      temp = temp * n * n;
      res += k * temp / i;

      k = k * -1;
    }

  } else {
    if (n < 0)
      res = -1 * (S21_PI / 2 - s21_fabs(s21_atan(1 / n)));
    else
      res = S21_PI / 2 - s21_atan(1 / n);
  }
  return res;
}
