FLAGS=-Wall -Werror -Wextra -std=c11
LIBS= -lcheck -lm 

OS:= $(shell uname -s)
ifeq ($(OS), Linux)
	LIBS +=  -lsubunit
endif

all: clean s21_math.a
deafult: all

clean: 
	rm -rf *.a *.o *.out *.html *.css *.gcno *.gcov *.gcda s21_test report
	rm -rf report
	
s21_math.a: functions/*.c 
	gcc -c functions/*.c 
	ar crs s21_math.a *.o
	rm -rf *.o


test: clean s21_math.a
	$(eval FLAGS=-Wall -Werror -Wextra -std=c11 --coverage)
	gcc $(FLAGS) -g -o s21_test s21_test.c functions/*.c tests/*.c $(LIBS) 
	./s21_test 
test_lib: clean s21_math.a
	$(eval LIBS += s21_math.a)
	gcc $(FLAGS) -g -o s21_test s21_test.c tests/*.c $(LIBS) 
	./s21_test 
gcov_report: test
	mkdir report
	gcov -b -l -p -c s21_*.gcno
	gcovr -o ./report/gcov_report.html --html --html-details -g -k -r . --html --html-details --filter functions/
	open report/gcov_report.html

check:
	clang-format -style=Google -n  *.c *.h ./*/*.c 

clang:
	clang-format -style=Google -i  *.c *.h ./*/*.c 
