/* Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному слову на каждой строке */

#define IN 1  // Внутри слова
#define OUT 0 // Снаружи слова

#include <stdio.h>

int main(int argc, char *agrv[])
{
    int input, state;
    state = OUT;
    while ((input = getchar()) != EOF)
    {
        if (input == ' ' || input == '\t')
        {
            state = OUT;
            printf("\n");
            continue;
        }
        else if (state = OUT)
        {
            state = IN;
        }
        printf("%c", input);
    }
    return 0;
}