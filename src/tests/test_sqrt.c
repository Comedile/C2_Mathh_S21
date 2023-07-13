#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_sqrt_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_sqrt_2) {
  double x = (-0);
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_sqrt_3) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_sqrt_4) {
  double x = -1;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_5) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_6) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_7) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_8) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_9) {
  double x = 2;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_sqrt_10) {
  double x = 7;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

START_TEST(test_sqrt_11) {
  double x = 21;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), S21_EPS);
}
END_TEST

Suite *test_sqrt() {
  Suite *suite = suite_create("sqrt");

  TCase *tcase_sqrt = tcase_create("test_sqrt");

  tcase_add_test(tcase_sqrt, test_sqrt_1);
  tcase_add_test(tcase_sqrt, test_sqrt_2);
  tcase_add_test(tcase_sqrt, test_sqrt_3);
  tcase_add_test(tcase_sqrt, test_sqrt_4);
  tcase_add_test(tcase_sqrt, test_sqrt_5);
  tcase_add_test(tcase_sqrt, test_sqrt_6);
  tcase_add_test(tcase_sqrt, test_sqrt_7);
  tcase_add_test(tcase_sqrt, test_sqrt_8);
  tcase_add_test(tcase_sqrt, test_sqrt_9);
  tcase_add_test(tcase_sqrt, test_sqrt_10);
  tcase_add_test(tcase_sqrt, test_sqrt_11);

  suite_add_tcase(suite, tcase_sqrt);

  return suite;
}
