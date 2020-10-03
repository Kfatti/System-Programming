/* Упражнение 1.13. Напишите программу, печатающущю гистограммы длин вводимых слов.
Гистограмму легко рисовать горизонтальными полосами. Рисовани вертикальныеми полосами - более трудная задача. */

#define IN 1  // Внутри слова
#define OUT 0 // Снаружи слова

#include <stdio.h>

int main(int argc, char *argv[])
{
    int input, state, nc, ncount;
    int ndigit[11];
    state = OUT;
    nc = ncount = 0;
    for (int i = 1; i <= 10; ++i)
    {
        ndigit[i] = 0;
    }
    while ((input = getchar()) != EOF)
    {
        if (input == ' ' || input == '\t' || input == '\n')
        {
            state = OUT;
            for (int i = 1; i <= ncount; ++i)
            {
                printf("*");
            }
            printf("\n");
            ncount = 0;
            continue;
        }
        else
        {
            ++ncount;
            ndigit[ncount] = ncount;
        }
        
        if (state == OUT)
        {
            state = IN;
        }
    }
    return 0;
}