#include <check.h>
#include <math.h>

#include "../s21_math.h"

// FABS
START_TEST(test_fabs_1) {
  double x = 0.0;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_2) {
  double x = (-0.0);
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_3) {
  double x = 5.5;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_4) {
  double x = (-5.5);
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_5) {
  double x = S21_INF;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_6) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_7) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_fabs(x));
}
END_TEST

START_TEST(test_fabs_8) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_fabs(x));
}
END_TEST

Suite *test_fabs() {
  Suite *suite = suite_create("fabs");

  TCase *tcase_fabs = tcase_create("test_fabs");

  tcase_add_test(tcase_fabs, test_fabs_1);
  tcase_add_test(tcase_fabs, test_fabs_2);
  tcase_add_test(tcase_fabs, test_fabs_3);
  tcase_add_test(tcase_fabs, test_fabs_4);
  tcase_add_test(tcase_fabs, test_fabs_5);
  tcase_add_test(tcase_fabs, test_fabs_6);
  tcase_add_test(tcase_fabs, test_fabs_7);
  tcase_add_test(tcase_fabs, test_fabs_8);

  suite_add_tcase(suite, tcase_fabs);

  return suite;
}
