#include <check.h>
#include <math.h>

#include "../s21_math.h"

// tan
START_TEST(test_tan_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_2) {
  double x = S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_3) {
  double x = 0.6 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_4) {
  double x = 0.9 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_5) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_6) {
  double x = 5 * S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_7) {
  double x = 1.6 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_8) {
  double x = 1.99 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_9) {
  double x = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_10) {
  double x = 4.2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_11) {
  double x = -4.2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), S21_EPS);
}
END_TEST

START_TEST(test_tan_12) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

START_TEST(test_tan_13) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

START_TEST(test_tan_14) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

START_TEST(test_tan_15) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

Suite *test_tan() {
  Suite *suite = suite_create("tan");

  TCase *tcase_tan = tcase_create("test_tan");

  tcase_add_test(tcase_tan, test_tan_1);
  tcase_add_test(tcase_tan, test_tan_2);
  tcase_add_test(tcase_tan, test_tan_3);
  tcase_add_test(tcase_tan, test_tan_4);
  tcase_add_test(tcase_tan, test_tan_5);
  tcase_add_test(tcase_tan, test_tan_6);
  tcase_add_test(tcase_tan, test_tan_7);
  tcase_add_test(tcase_tan, test_tan_8);
  tcase_add_test(tcase_tan, test_tan_9);
  tcase_add_test(tcase_tan, test_tan_10);
  tcase_add_test(tcase_tan, test_tan_11);
  tcase_add_test(tcase_tan, test_tan_12);
  tcase_add_test(tcase_tan, test_tan_13);
  tcase_add_test(tcase_tan, test_tan_14);
  tcase_add_test(tcase_tan, test_tan_15);

  suite_add_tcase(suite, tcase_tan);

  return suite;
}
