#include <stdio.h> /* Стандартный заголовочный файл ввода-вывода */
#include <iostream> /* Библиотека (стандарт) */
#include <locale.h> /* Русификатор */
#include <windows.h> /* Русификатор */
using namespace std;
int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE,"Russian");
    double plus, minus, pow, div; // объявление переменных через запятую
    double a1; // отдельное объявление переменной a1
    double a2; // отдельное объявление переменной a2
cout << "Введите первое число: ";
    cin >> a1;
    cout << "Введите второе число: ";
    cin >> a2;
