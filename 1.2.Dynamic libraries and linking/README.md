"# Linux_programming_basic" 


В этом задании Вам необходимо создать разделяемую динамическую библиотеку libsolution.so в которой реализовать функцию со следующим прототипом:

int stringStat(const char *string, size_t multiplier, int *count);

Функция возвращает значение длины строки string, умноженное на multiplier, и увеличивает на 1 значение, на которое указывает count.

_____________
 solution.c с помощью  Makefile компилируется в динамическую библиотеку libsolution.so