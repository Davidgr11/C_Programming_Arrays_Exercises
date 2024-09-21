#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5]={0}, b[5][5]={0}, c[5][5]={0}, i, j, k;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=rand()%5;
            b[i][j]=rand()%5;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            c[i][j]=0;
            for(k=0;k<5;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
