﻿// 1. Даны два числа(целые положительные).Вывести «истина», если выражение «каждое из чисел нечетное» является истинным, или «ложь», если является ложным.

#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");

    // Задание 1

    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    // Проверка num1 и num2 на нечетность
    if ((num1 % 2 != 0) && (num2 % 2 != 0)) {
        cout << "Истина";
    }
    else {
        cout << "Ложь";
    }

    return 0;
}