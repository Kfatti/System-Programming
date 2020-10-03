/* Напишите программу, копирующую вводимые символы в выходной поток с заменой символа табуляции на /t,
символа забоя на \b и каждой обратной наклонно черты на \\. Это сделает видимыми все символы табуляции и забоя */

#include <stdio.h>

int main(int argc, char *agrv[])
{
    int input;
    while ((input = getchar()) != EOF)
    {
        if (input == '\t')
        {
            printf("\\t");
            continue;
        }
        if (input == '\b')
        {
            printf("\\b");
            continue;
        }
        if (input == '\\')
        {
            printf("\\\\");
            continue;
        }
        printf("%c", input);
    }
    return 0;
}