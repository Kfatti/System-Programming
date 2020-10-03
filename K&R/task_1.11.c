#include <stdio.h>

#define IN 1  /* Внутри слова */
#define OUT 0 /* вне слова */

/* подсчет строк, слов и символов */
int main(int argc, char *argv[])
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("New lines - %d\n", nl);
    printf("New words - %d\n", nw);
    printf("New chars - %d\n", nc);
    return 0;
}