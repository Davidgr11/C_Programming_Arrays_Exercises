#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//David Gonzalez, Javier Lima y Michelle Covarruvias
int main()
{
    int v[5][4]={0}, a[5], b[4], r, c, sumav, may, mejor, opc, men, peor;
    srand(time(NULL));
    char op;
    for(r=0;r<5;r++)
    {
        sumav=0;
        for(c=0;c<4;c++)
        {
            v[r][c]=rand()%51+50;
            sumav=sumav+v[r][c];
        }
        a[r]=sumav;
    }
    do
    {
        printf("\na)Total de ventas de cada vendedor y el que vendió más\nb)Total de ventas de un vendedor específico\nc)Matriz de ventas\nd)Total de ventas por departamento\ne)Salir\n");
        fflush(stdin);
        scanf("%c", &op);
        switch(op)
        {
            case 'a': case 'A':     may=0;
                                    for(r=0;r<5;r++)
                                    {
                                        printf("Vendedor%d=%d", r+1, a[r]);
                                        printf("\n");
                                        if(a[r]>may)
                                        {
                                            may=a[r];
                                            mejor=r+1;
                                        }
                                    }
                                    printf("El que vendio mas fue el vendedor %d", mejor);
                                    break;
            case 'b': case 'B':     printf("Elige el vendedor para saber su total de ventas\n0)Vendedor1\n1)Vendedor2\n2)Vendedor3\n3)Vendedor4\n4)Vendedor5\n");
                                    scanf("%d", &opc);
                                    printf("Total de ventas\t%d\n", a[opc]);
                                    break;
            case 'c': case 'C':     for(r=0;r<5;r++)
                                    {
                                        for(c=0;c<4;c++)
                                        {
                                            printf("%d\t", v[r][c]);
                                        }
                                        printf("\n");
                                    }
                                    break;
            case 'd': case 'D':     may=0;
                                    men=1000;
                                    for(c=0;c<4;c++)
                                    {
                                        sumav=0;
                                        for(r=0;r<5;r++)
                                        {
                                            sumav=sumav+v[r][c];
                                        }
                                        b[c]=sumav;
                                        printf("Departamento %d=%d", c+1, sumav);
                                        printf("\n");
                                        if(b[c]<men)
                                        {
                                            men=b[c];
                                            peor=c+1;
                                        }
                                        if(b[c]>may)
                                        {
                                            may=b[c];
                                            mejor=c+1;
                                        }
                                    }
                                    printf("El que vendio menos fue el departamento %d\n", peor);
                                    printf("El que vendio más fue el departamento %d\n", mejor);
                                    break;
            default: printf("Adiós\n");
        }
    }while(op!='e' && op!='E');
    return 0;
}
