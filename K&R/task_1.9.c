#include <stdio.h>

int main(int argc, char *argv[])
{
    int input;
    int old_char = 0;
    while ((input = getchar()) != EOF)
    {
        if ((input == ' ') && (input == old_char)) 
        {
            continue;
        }
        printf("%c", input);
        old_char = input;
    }
    return 0;
}