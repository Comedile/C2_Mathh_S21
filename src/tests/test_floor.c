#include <check.h>
#include <math.h>

#include "../s21_math.h"

START_TEST(test_floor_1) {
  double x = 0;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_2) {
  double x = (-0);
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_3) {
  double x = 0.5;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_4) {
  double x = (-0.5);
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_5) {
  double x = 5.5;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_6) {
  double x = (-5.5);
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_7) {
  double x = S21_INF;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_8) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_9) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

Suite *test_floor() {
  Suite *suite = suite_create("floor");

  TCase *tcase_floor = tcase_create("test_floor");

  tcase_add_test(tcase_floor, test_floor_1);
  tcase_add_test(tcase_floor, test_floor_2);
  tcase_add_test(tcase_floor, test_floor_3);
  tcase_add_test(tcase_floor, test_floor_4);
  tcase_add_test(tcase_floor, test_floor_5);
  tcase_add_test(tcase_floor, test_floor_6);
  tcase_add_test(tcase_floor, test_floor_7);
  tcase_add_test(tcase_floor, test_floor_8);
  tcase_add_test(tcase_floor, test_floor_9);

  suite_add_tcase(suite, tcase_floor);

  return suite;
}
