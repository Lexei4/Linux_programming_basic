"# Linux_programming_basic" 

конспект
https://github.com/fedorch/stepic-548

В этом задании Вам необходимо создать разделяемую динамическую библиотеку libsolution.so в которой реализовать функцию со следующим прототипом:

int stringStat(const char *string, size_t multiplier, int *count);

Функция возвращает значение длины строки string, умноженное на multiplier, и увеличивает на 1 значение, на которое указывает count.