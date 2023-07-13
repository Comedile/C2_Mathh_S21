#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_asin_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_3) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_4) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_5) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), S21_EPS);
}
END_TEST

START_TEST(test_asin_6) {
  double x = S21_PI;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_7) {
  double x = -S21_PI;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_8) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_9) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_11) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

Suite *test_asin() {
  Suite *suite = suite_create("asin");

  TCase *tcase_asin = tcase_create("test_asin");

  tcase_add_test(tcase_asin, test_asin_1);
  tcase_add_test(tcase_asin, test_asin_2);
  tcase_add_test(tcase_asin, test_asin_3);
  tcase_add_test(tcase_asin, test_asin_4);
  tcase_add_test(tcase_asin, test_asin_5);
  tcase_add_test(tcase_asin, test_asin_6);
  tcase_add_test(tcase_asin, test_asin_7);
  tcase_add_test(tcase_asin, test_asin_8);
  tcase_add_test(tcase_asin, test_asin_9);
  tcase_add_test(tcase_asin, test_asin_10);
  tcase_add_test(tcase_asin, test_asin_11);

  suite_add_tcase(suite, tcase_asin);

  return suite;
}
