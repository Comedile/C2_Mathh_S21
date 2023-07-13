#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_log_1) {
  double x = 0;
  ck_assert_ldouble_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(test_log_2) {
  double x = (-0);
  ck_assert_ldouble_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(test_log_3) {
  double x = 1.0;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_4) {
  double x = 10;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_5) {
  double x = 1.5;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_6) {
  double x = (-1.5);
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(test_log_7) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_8) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_log(x));
}
END_TEST

START_TEST(test_log_9) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(test_log_10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(test_log_11) {
  double x = 3.5;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_12) {
  double x = 12;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_13) {
  double x = 7;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

START_TEST(test_log_14) {
  double x = 2;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), S21_EPS);
}
END_TEST

Suite *test_log() {
  Suite *suite = suite_create("log");

  TCase *tcase_log = tcase_create("test_log");

  tcase_add_test(tcase_log, test_log_1);
  tcase_add_test(tcase_log, test_log_2);
  tcase_add_test(tcase_log, test_log_3);
  tcase_add_test(tcase_log, test_log_4);
  tcase_add_test(tcase_log, test_log_5);
  tcase_add_test(tcase_log, test_log_6);
  tcase_add_test(tcase_log, test_log_7);
  tcase_add_test(tcase_log, test_log_8);
  tcase_add_test(tcase_log, test_log_9);
  tcase_add_test(tcase_log, test_log_10);
  tcase_add_test(tcase_log, test_log_11);
  tcase_add_test(tcase_log, test_log_12);
  tcase_add_test(tcase_log, test_log_13);
  tcase_add_test(tcase_log, test_log_14);

  suite_add_tcase(suite, tcase_log);

  return suite;
}
