#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5]={0}, sum, dia, hrs, r, c, SM=0, mejor;
    srand(time(NULL));
    printf("Trabajadores\n\n");
    for(r=0;r<5;r++)
    {
        sum=0;
        hrs=0;
        dia=0;
        for(c=0;c<5;c++)
        {
            m[r][c]=rand()%8+8;
            printf("%d  ", m[r][c]);
            sum=sum+m[r][c];
            if(m[r][c]>hrs)
            {
                hrs=m[r][c];
                dia=c+1;
            }
        }
        if(sum>SM)
        {
            SM=sum;
            mejor=r+1;
        }
        printf("\tTotal  %d  Mejor dia  %d  con  %d horas\n\n", sum, dia, hrs);
    }
    printf("El trabajador que laboro mas horas es  %d  con un total de  %d horas", mejor, SM);
    return 0;
}
