#include "../s21_math.h"

long double s21_fabs(double n) {
  long double res = 0;
  if (n < 0)
    res = -1 * n;
  else
    res = n;
  return res;
}
