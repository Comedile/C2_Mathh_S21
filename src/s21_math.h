#include <stdio.h>
#include <stdlib.h>
#define S21_E 2.718281828459045235360287471352  // e
#define S21_PI 3.14159265358979323846
#define S21_EPS 0.000000001
#define S21_MAX (1.7014118e+38 - 1)
#define S21_NAN 0.0 / 0.0
#define S21_INF 1.0 / 0.0

int s21_abs(int n);
long double s21_fabs(double n);
long double s21_ceil(double n);
long double s21_floor(double n);
long double s21_sqrt(double n);
long double s21_exp(double n);
long double s21_log(double n);
long double s21_pow(double base, double exp);
long double s21_fmod(double x, double y);
long double s21_sin(double n);
long double s21_cos(double n);
long double s21_tan(double n);
long double s21_asin(double n);
long double s21_acos(double n);
long double s21_atan(double n);
