#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    double i;
    FILE *fp;
    srand(time(NULL));
    
    fp = fopen("task_3.txt", "w");
    fprintf(fp, "%d\n", rand());
    fclose(fp);

    fp = fopen("task_3.txt", "r");
    fscanf(fp, "%d\n", &i);
    printf("The random number is %d\n", i);
    fclose(fp);

    return 0;
}