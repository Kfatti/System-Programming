// Напишите программу для подсчета пробелов, табуляций и новых строк

#include <stdio.h>

int main(int argc, char *argv[])
{
    int c, space, tab, new_line;
    space = tab = new_line = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            space++;
        }
        if (c == '\t')
        {
            tab++;
        }
        if (c == '\n')
        {
            new_line++;
        }
    }
    printf("Spaces - %i\n", space);
    printf("Tabs - %i\n", tab);
    printf("New lines - %i\n", new_line);
    return 0;
}