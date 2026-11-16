#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int N;
    int S;
    printf("Введите целое число N (N < 1000): ");
    scanf("%d", &N);
    S = N / 100 + (N / 10) % 10 + N % 10;
    printf("Сумма цифр числа: %d\n", S);
    if (S >= 10 && S <= 99)
    {
        printf("Сумма цифр является двузначным числом.\n");
    }
    else
    {
        printf("Сумма цифр не является двузначным числом.\n");
    }
    return 0;
}