﻿#include "tasks.h"

/*	Task 01. The Same Numbers [совпадающие числа]
 *
 *	Даны четыре целых числа. Определите, сколько из них совпадающих.
 *	Если числа не совпадают, то необходимо возвратить ноль.
 *
 *	Формат входных данных [input]
 *	На вход функция получает четыре целых числа типа int.
 *
 *	Формат выходных данных [output]
 *	Функция должна возвратить количество совпадающих чисел или ноль,
 *	если таких чисел нет.
 *
 *	[ input 1]: 7 7 7 7
 *	[output 1]: 4
 *
 *	[ input 2]: 7 7 7 8
 *	[output 2]: 3
 *
 *	[ input 3]: 7 7 8 9
 *	[output 3]: 2
 *
 *	[ input 4]: 6 7 8 9
 *	[output 4]: 0
 */

int task01(int a, int b, int c, int d) {
    if (a == b && b == c && c == d) {
        return 4;
    }
    else if (a == b && b == c || a == b && b == d ||
        a == c && c == d || b == c && c == d) {
        return 3;
    }
    else if (a == b || a == c || a == d || b == c || b == d || c == d) {
        return 2;
    }
    else {
        return 0;
    }
}