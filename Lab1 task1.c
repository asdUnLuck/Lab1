#include <locale.h>
#include <stdio.h>

int task1()
{
    setlocale(0, "rus");
    puts("Нажмите Enter для продолжения...");
    getchar();
    puts("Продолжение программы");
}