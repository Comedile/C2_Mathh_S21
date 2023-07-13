#include "../s21_math.h"

long long int s21_fac(int n) {
  long long int res = 0;

  if (n == 1 || n == 0) {
    res = 1;
  } else
    res = n * s21_fac(n - 1);

  return res;
}

double rounf2PI(double n) {
  int a = (int)(n / (S21_PI));

  if (a % 2 == 0)
    n -= a * S21_PI;
  else
    n = -1 * (n - (a * S21_PI));

  return n;
}

long double s21_sin(double n) {
  long double res = 0;
  long double nn = 0;
  long double temp = 1;
  int k = -1;

  if ((n != n) || n == S21_INF || n == -S21_INF) {
    res = S21_NAN;
  } else {
    n = rounf2PI(n);

    res = n;
    temp = 1;
    nn = n;

    for (int i = 3; temp > 1e-7; i = i + 2) {
      nn *= n * n;

      temp = nn / s21_fac(i);
      res += k * temp;

      k = k * -1;
      if (temp < 0) temp *= -1;
    }
  }

  return res;
}
