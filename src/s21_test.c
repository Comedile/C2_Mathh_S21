#include "s21_test.h"

void print_info(Suite *suite) {
  SRunner *srunner = srunner_create(suite);
  srunner_run_all(srunner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(srunner);
  srunner_free(srunner);

  if (failed_count != 0) {
    printf("FAILED\n");
  } else {
    printf("SUCCESS\n");
  }
}

int main() {
  Suite *suites[] = {test_fmod(), test_floor(), test_tan(),  test_cos(),
                     test_fabs(), test_sin(),   test_abs(),  test_ceil(),
                     test_exp(),  test_atan(),  test_log(),  test_pow(),
                     test_acos(), test_asin(),  test_sqrt(), NULL};

  for (int i = 0; suites[i] != NULL; i++) {
    print_info(suites[i]);
  }

  return 0;
}
