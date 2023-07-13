#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_fmod_1) {
  double x = 0, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_2) {
  double x = 0, y = 5.5;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_fmod_3) {
  double x = 5.5, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_4) {
  double x = 5.5, y = 1.6;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_fmod_5) {
  double x = 1.6, y = 5.5;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_fmod_6) {
  double x = S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_7) {
  double x = S21_INF, y = 1;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_8) {
  double x = -S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_9) {
  double x = -S21_INF, y = 1;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_10) {
  double x = 0, y = S21_INF;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_fmod_11) {
  double x = 0, y = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), S21_EPS);
}
END_TEST

START_TEST(test_fmod_12) {
  double x = S21_INF, y = S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_13) {
  double x = S21_INF, y = -S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_14) {
  double x = -S21_INF, y = S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_15) {
  double x = -S21_INF, y = -S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_16) {
  double x = S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_17) {
  double x = -S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

Suite *test_fmod() {
  Suite *suite = suite_create("fmod");

  TCase *tcase_fmod = tcase_create("test_fmod");

  tcase_add_test(tcase_fmod, test_fmod_1);
  tcase_add_test(tcase_fmod, test_fmod_2);
  tcase_add_test(tcase_fmod, test_fmod_3);
  tcase_add_test(tcase_fmod, test_fmod_4);
  tcase_add_test(tcase_fmod, test_fmod_5);
  tcase_add_test(tcase_fmod, test_fmod_6);
  tcase_add_test(tcase_fmod, test_fmod_7);
  tcase_add_test(tcase_fmod, test_fmod_8);
  tcase_add_test(tcase_fmod, test_fmod_9);
  tcase_add_test(tcase_fmod, test_fmod_10);
  tcase_add_test(tcase_fmod, test_fmod_11);
  tcase_add_test(tcase_fmod, test_fmod_12);
  tcase_add_test(tcase_fmod, test_fmod_13);
  tcase_add_test(tcase_fmod, test_fmod_14);
  tcase_add_test(tcase_fmod, test_fmod_15);
  tcase_add_test(tcase_fmod, test_fmod_16);
  tcase_add_test(tcase_fmod, test_fmod_17);

  suite_add_tcase(suite, tcase_fmod);

  return suite;
}
