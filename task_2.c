#include <stdio.h>

int main(int argc, char *argv[])
{
    double i;
    FILE *fp;

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Cannot open a file.\n");
        return 1;
    }
    else
    {
        printf("The number(s) multiplied by 5%% is/are:\n");
        while ((fscanf(fp, "%d", &i) != EOF))
        {
            printf("%d\n", i * 1.05);
        }
        fclose(fp);
    }
    return 0;
}