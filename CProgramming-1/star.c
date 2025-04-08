#include<stdio.h>

int main()
{
    int i, j, n;
    i=6;
    j=1;
    n=2;
    while (i)
    {
        while (j)
        {
            printf("*");
            j=j-1;
        }

        printf("\n");
        i=i-1;
        j=n;
        n=n+1;
    }
    return 0;
}