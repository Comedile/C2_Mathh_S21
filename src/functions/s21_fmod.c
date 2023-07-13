#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = 0;
  if (x == S21_INF || x == -S21_INF || y == 0) {
    res = -S21_NAN;
  } else if ((x == 1 || x == -1 || x == 0) && (y == S21_INF || y == -S21_INF)) {
    res = x;
  } else {
    long long int mod = 0;
    mod = x / y;
    res = (long double)x - mod * (long double)y;
  }
  return res;
}
