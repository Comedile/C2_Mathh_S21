#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_acos_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_3) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_4) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_5) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), S21_EPS);
}
END_TEST

START_TEST(test_acos_6) {
  double x = S21_PI;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_7) {
  double x = -S21_PI;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_8) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_9) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_11) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

Suite *test_acos() {
  Suite *suite = suite_create("acos");

  TCase *tcase_acos = tcase_create("test_acos");

  tcase_add_test(tcase_acos, test_acos_1);
  tcase_add_test(tcase_acos, test_acos_2);
  tcase_add_test(tcase_acos, test_acos_3);
  tcase_add_test(tcase_acos, test_acos_4);
  tcase_add_test(tcase_acos, test_acos_5);
  tcase_add_test(tcase_acos, test_acos_6);
  tcase_add_test(tcase_acos, test_acos_7);
  tcase_add_test(tcase_acos, test_acos_8);
  tcase_add_test(tcase_acos, test_acos_9);
  tcase_add_test(tcase_acos, test_acos_10);
  tcase_add_test(tcase_acos, test_acos_11);

  suite_add_tcase(suite, tcase_acos);

  return suite;
}
