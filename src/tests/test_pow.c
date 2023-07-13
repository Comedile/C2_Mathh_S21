#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_pow_1) {
  double base = 0, exp = 1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_2) {
  double base = 1, exp = 1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_3) {
  double base = 2, exp = 1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_4) {
  double base = 2, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_5) {
  double base = 0, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_6) {
  double base = 2, exp = -1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_7) {
  double base = 0, exp = -4;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_8) {
  double base = 0, exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_9) {
  double base = 0, exp = -S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_10) {
  double base = S21_INF, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_11) {
  double base = -S21_INF, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_12) {
  double base = 1, exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_13) {
  double base = 2, exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_14) {
  double base = 2, exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_15) {
  double base = S21_INF, exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_16) {
  double base = S21_INF, exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_17) {
  double base = -S21_INF, exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_18) {
  double base = -S21_INF, exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_19) {
  double base = 3, exp = 4;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_20) {
  double base = 2, exp = 7;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_21) {
  double base = -1, exp = -1;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_22) {
  double base = 1., exp = S21_NAN;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_23) {
  double base = 0., exp = -0.5;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_24) {
  double base = 0., exp = 3;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_25) {
  double base = -3, exp = 3;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(test_pow_26) {
  double base = -3, exp = -3;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

Suite *test_pow() {
  Suite *suite = suite_create("pow");

  TCase *tcase_pow = tcase_create("test_pow");

  tcase_add_test(tcase_pow, test_pow_1);
  tcase_add_test(tcase_pow, test_pow_2);
  tcase_add_test(tcase_pow, test_pow_3);
  tcase_add_test(tcase_pow, test_pow_4);
  tcase_add_test(tcase_pow, test_pow_5);
  tcase_add_test(tcase_pow, test_pow_6);
  tcase_add_test(tcase_pow, test_pow_7);
  tcase_add_test(tcase_pow, test_pow_8);
  tcase_add_test(tcase_pow, test_pow_9);
  tcase_add_test(tcase_pow, test_pow_10);
  tcase_add_test(tcase_pow, test_pow_11);
  tcase_add_test(tcase_pow, test_pow_12);
  tcase_add_test(tcase_pow, test_pow_13);
  tcase_add_test(tcase_pow, test_pow_14);
  tcase_add_test(tcase_pow, test_pow_15);
  tcase_add_test(tcase_pow, test_pow_16);
  tcase_add_test(tcase_pow, test_pow_17);
  tcase_add_test(tcase_pow, test_pow_18);
  tcase_add_test(tcase_pow, test_pow_19);
  tcase_add_test(tcase_pow, test_pow_20);
  tcase_add_test(tcase_pow, test_pow_21);
  tcase_add_test(tcase_pow, test_pow_22);
  tcase_add_test(tcase_pow, test_pow_23);
  tcase_add_test(tcase_pow, test_pow_24);
  tcase_add_test(tcase_pow, test_pow_25);
  tcase_add_test(tcase_pow, test_pow_26);

  suite_add_tcase(suite, tcase_pow);

  return suite;
}
