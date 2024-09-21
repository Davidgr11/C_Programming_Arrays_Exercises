#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[10][10]={0}, r, c, may, v1[10]={0}, v2[10]={0};
    for(r=0;r<10;r++)
    {
        for(c=0;c<10;c++)
        {
            M[r][c]=rand()%50+1;
            if(M[r][c]>v1[r])
            {
                v1[r]=M[r][c];
            }
            printf("%d\t", M[r][c]);
        }
        printf("Mayor= %d\n", v1[r]);
    }
    printf("Mayores\n");
    for(c=0;c<10;c++)
    {
        for(r=0;r<10;r++)
        {
            if(M[r][c]>v2[c])
            {
                v2[c]=M[r][c];
            }
        }
        printf("%d\t", v2[c]);
    }
    return 0;
}
