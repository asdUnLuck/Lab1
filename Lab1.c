#include <locale.h>
#include <stdio.h>

int name();
int date();

int main()
{
    setlocale(0, ".UTF-8");
    name();
    date();
    return 322;
}

int name()
{
    puts("************************************************");
    puts("*                                              *");
    puts("*   Тема: Разработка консольного приложения    *");
    puts("*                                              *");
    puts("*         Выполнил: Левашов Д. И.              *");
    puts("*                                              *");
    puts("************************************************");
}

int date()
{
    puts("     _     _   _    _   _ ");
    puts("  | |_|   | |  _|  | |   |");
    puts("  |  _|.  |_| |_ . |_|   |");
}

