#include <stdio.h>

int main(int argc, char *agrv[])
{
    int input;
    while((input = getchar()) != EOF)
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