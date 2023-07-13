#include <check.h>
#include <math.h>

#include "../s21_math.h"

// ABS
START_TEST(test_abs_1) {
  int x = 0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_2) {
  int x = -0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_3) {
  int x = 5;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_4) {
  int x = (-5);
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_5) {
  int x = S21_INF;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_6) {
  int x = -S21_INF;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_7) {
  int x = S21_NAN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_8) {
  int x = -S21_NAN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

Suite *test_abs() {
  Suite *suite = suite_create("abs");
  TCase *tcase_abs = tcase_create("test_abs");

  tcase_add_test(tcase_abs, test_abs_1);
  tcase_add_test(tcase_abs, test_abs_2);
  tcase_add_test(tcase_abs, test_abs_3);
  tcase_add_test(tcase_abs, test_abs_4);
  tcase_add_test(tcase_abs, test_abs_5);
  tcase_add_test(tcase_abs, test_abs_6);
  tcase_add_test(tcase_abs, test_abs_7);
  tcase_add_test(tcase_abs, test_abs_8);

  suite_add_tcase(suite, tcase_abs);

  return suite;
}
