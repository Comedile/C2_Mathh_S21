#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_exp_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_2) {
  double x = (-0);
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_3) {
  double x = 3;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_4) {
  double x = (-3);
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_5) {
  double x = 5.5;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_6) {
  double x = (-5.5);
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_7) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_exp(x));
}
END_TEST

START_TEST(test_exp_8) {
  double x = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_9) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST

START_TEST(test_exp_10) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST

START_TEST(test_exp_11) {
  double x = 2;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(test_exp_12) {
  double x = 3;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

Suite *test_exp() {
  Suite *suite = suite_create("exp");

  TCase *tcase_exp = tcase_create("test_exp");

  tcase_add_test(tcase_exp, test_exp_1);
  tcase_add_test(tcase_exp, test_exp_2);
  tcase_add_test(tcase_exp, test_exp_3);
  tcase_add_test(tcase_exp, test_exp_4);
  tcase_add_test(tcase_exp, test_exp_5);
  tcase_add_test(tcase_exp, test_exp_6);
  tcase_add_test(tcase_exp, test_exp_7);
  tcase_add_test(tcase_exp, test_exp_8);
  tcase_add_test(tcase_exp, test_exp_9);
  tcase_add_test(tcase_exp, test_exp_10);
  tcase_add_test(tcase_exp, test_exp_11);
  tcase_add_test(tcase_exp, test_exp_12);

  suite_add_tcase(suite, tcase_exp);

  return suite;
}
