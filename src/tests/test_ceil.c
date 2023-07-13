#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_ceil_1) {
  double x = 0;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_2) {
  double x = (-0);
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_3) {
  double x = 0.5;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_4) {
  double x = (-0.5);
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_5) {
  double x = 5.5;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_6) {
  double x = (-5.5);
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_7) {
  double x = S21_INF;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_8) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

Suite *test_ceil() {
  Suite *suite = suite_create("ceil");

  TCase *tcase_ceil = tcase_create("test_ceil");

  tcase_add_test(tcase_ceil, test_ceil_1);
  tcase_add_test(tcase_ceil, test_ceil_2);
  tcase_add_test(tcase_ceil, test_ceil_3);
  tcase_add_test(tcase_ceil, test_ceil_4);
  tcase_add_test(tcase_ceil, test_ceil_5);
  tcase_add_test(tcase_ceil, test_ceil_6);
  tcase_add_test(tcase_ceil, test_ceil_7);
  tcase_add_test(tcase_ceil, test_ceil_8);

  suite_add_tcase(suite, tcase_ceil);

  return suite;
}
