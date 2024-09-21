#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[5][5]={0}, r, c , aux;
    printf("Matriz original\n");
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            M[r][c]=rand()%10+1;
            printf("%d\t", M[r][c]);
        }
        printf("\n");
    }
    printf("Matriz transpuesta\n");
    for(r=0;r<5;r++)
    {
        for(c=r;c<5;c++)
        {
            aux=M[r][c];
            M[r][c]=M[c][r];
            M[c][r]=aux;
        }
    }
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            printf("%d\t", M[r][c]);
        }
        printf("\n");
    }
    return 0;
}
