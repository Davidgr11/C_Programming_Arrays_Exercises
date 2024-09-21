#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[5][4]={0}, r, c;
    float suma;
    for(r=0;r<5;r++)
    {
        suma=0;
        for(c=0;c<4;c++)
        {
            M[r][c]=rand()%6+5;
            suma=suma+M[r][c];
            printf("%d  ", M[r][c]);
        }
        suma=suma/4;
        printf("Pomedio= %f\n", suma);
    }
    return 0;
}
