#include <check.h>
#include <math.h>

#include "../s21_math.h"

// ATAN
START_TEST(test_atan_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_3) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_4) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_5) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_6) {
  double x = S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_7) {
  double x = -S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_8) {
  double x = -1.73;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_9) {
  double x = S21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_10) {
  double x = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), S21_EPS);
}
END_TEST

START_TEST(test_atan_11) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_atan(x));
}
END_TEST

START_TEST(test_atan_12) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_atan(x));
}
END_TEST

Suite *test_atan() {
  Suite *suite = suite_create("atan");

  TCase *tcase_atan = tcase_create("test_atan");

  tcase_add_test(tcase_atan, test_atan_1);
  tcase_add_test(tcase_atan, test_atan_2);
  tcase_add_test(tcase_atan, test_atan_3);
  tcase_add_test(tcase_atan, test_atan_4);
  tcase_add_test(tcase_atan, test_atan_5);
  tcase_add_test(tcase_atan, test_atan_6);
  tcase_add_test(tcase_atan, test_atan_7);
  tcase_add_test(tcase_atan, test_atan_8);
  tcase_add_test(tcase_atan, test_atan_9);
  tcase_add_test(tcase_atan, test_atan_10);
  tcase_add_test(tcase_atan, test_atan_11);
  tcase_add_test(tcase_atan, test_atan_12);

  suite_add_tcase(suite, tcase_atan);

  return suite;
}
