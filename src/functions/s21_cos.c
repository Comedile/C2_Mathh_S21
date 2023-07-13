#include "../s21_math.h"

long double s21_cos(double n) {
  n += S21_PI / 2;
  long double res = s21_sin(n);
  return res;
}
