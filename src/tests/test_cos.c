#include <check.h>
#include <math.h>

#include "../s21_math.h"

// COS
START_TEST(test_cos_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_2) {
  double x = S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_3) {
  double x = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_4) {
  double x = 0.6 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_5) {
  double x = 0.9 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_6) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_7) {
  double x = 5 * S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_8) {
  double x = 6 * S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_9) {
  double x = 1.6 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_10) {
  double x = 1.99 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_11) {
  double x = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_12) {
  double x = 4.2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_13) {
  double x = -4.2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), S21_EPS);
}
END_TEST

START_TEST(test_cos_14) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_cos_15) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_cos_16) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_cos_17) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

Suite *test_cos() {
  Suite *suite = suite_create("cos");

  TCase *tcase_cos = tcase_create("test_cos");

  tcase_add_test(tcase_cos, test_cos_1);
  tcase_add_test(tcase_cos, test_cos_2);
  tcase_add_test(tcase_cos, test_cos_3);
  tcase_add_test(tcase_cos, test_cos_4);
  tcase_add_test(tcase_cos, test_cos_5);
  tcase_add_test(tcase_cos, test_cos_6);
  tcase_add_test(tcase_cos, test_cos_7);
  tcase_add_test(tcase_cos, test_cos_8);
  tcase_add_test(tcase_cos, test_cos_9);
  tcase_add_test(tcase_cos, test_cos_10);
  tcase_add_test(tcase_cos, test_cos_11);
  tcase_add_test(tcase_cos, test_cos_12);
  tcase_add_test(tcase_cos, test_cos_13);
  tcase_add_test(tcase_cos, test_cos_14);
  tcase_add_test(tcase_cos, test_cos_15);
  tcase_add_test(tcase_cos, test_cos_16);
  tcase_add_test(tcase_cos, test_cos_17);

  suite_add_tcase(suite, tcase_cos);

  return suite;
}
