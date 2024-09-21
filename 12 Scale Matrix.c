#include <stdio.h>
#include <stdlib.h>

int main()
{
    char M[6][6]={' '}, r, c;
    for(r=0;r<6;r++)
    {
        for(c=0;c<=r;c++)
        {
            M[r][c]='*';
            printf("%c   ", M[r][c]);
        }
        printf("\n");
    }
    return 0;
}
