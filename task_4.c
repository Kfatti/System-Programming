/* Напишите сценарий, проверяющий имя текущего каталога 
и выводящий сообщение об ошибке, если оно короче пяти символов */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int main()
{
    char cwd[PATH_MAX];
    char dir[PATH_MAX];
    int size_of_end_dir = 0;
    getcwd(cwd, sizeof(cwd));
    for (int i = strlen(cwd), k = 0; cwd[i] != 47; i--, k++)
    {
        dir[k] = cwd[i];
        size_of_end_dir++;
    }
    if (size_of_end_dir < 5)
    {
        printf("Error!!!\n");
    }
    else
    {
        printf("Full path: %s\n", cwd);
        printf("The Current Directory: ");
        for (int i = size_of_end_dir; i != 0; i--)
        {
            putchar(dir[i]);
        }
        printf("\n");
    }
    return 0;
}