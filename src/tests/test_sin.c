#include <check.h>
#include <math.h>

#include "../s21_math.h"

// SIN
START_TEST(test_sin_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_2) {
  double x = S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_3) {
  double x = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_4) {
  double x = 0.6 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_5) {
  double x = 0.9 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_6) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_7) {
  double x = 5 * S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_8) {
  double x = 6 * S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_9) {
  double x = 1.6 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_10) {
  double x = 1.99 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_11) {
  double x = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_12) {
  double x = 4.2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_13) {
  double x = -4.2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), S21_EPS);
}
END_TEST

START_TEST(test_sin_14) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_15) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_16) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_17) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

Suite *test_sin() {
  Suite *suite = suite_create("sin");

  TCase *tcase_sin = tcase_create("test_sin");

  tcase_add_test(tcase_sin, test_sin_1);
  tcase_add_test(tcase_sin, test_sin_2);
  tcase_add_test(tcase_sin, test_sin_3);
  tcase_add_test(tcase_sin, test_sin_4);
  tcase_add_test(tcase_sin, test_sin_5);
  tcase_add_test(tcase_sin, test_sin_6);
  tcase_add_test(tcase_sin, test_sin_7);
  tcase_add_test(tcase_sin, test_sin_8);
  tcase_add_test(tcase_sin, test_sin_9);
  tcase_add_test(tcase_sin, test_sin_10);
  tcase_add_test(tcase_sin, test_sin_11);
  tcase_add_test(tcase_sin, test_sin_12);
  tcase_add_test(tcase_sin, test_sin_13);
  tcase_add_test(tcase_sin, test_sin_14);
  tcase_add_test(tcase_sin, test_sin_15);
  tcase_add_test(tcase_sin, test_sin_16);
  tcase_add_test(tcase_sin, test_sin_17);

  suite_add_tcase(suite, tcase_sin);

  return suite;
}
