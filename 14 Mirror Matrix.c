#include <stdio.h>
#include <stdlib.h>

int main()
{
    char M[7][7]={' '}, r, c;
    for(r=0;r<4;r++)
    {
        for(c=r;c<=6-r;c++)
        {
            M[r][c]='*';
            M[6-r][c]='*';
        }
    }
    for(r=0;r<7;r++)
    {
        for(c=0;c<7;c++)
        {
            printf("%c   ", M[r][c]);
        }
        printf("\n");
    }
    return 0;
}
