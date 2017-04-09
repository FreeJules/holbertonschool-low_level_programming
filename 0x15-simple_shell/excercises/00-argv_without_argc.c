#include <stdio.h>
int main(int argc __attribute__((__unused__)), char *argv[])
{
    int i;

    /*printf("Argc %d\n",argc);*/
    for(i = 1; argv[i] != NULL; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}
