#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10]={0}, B[10]={0}, C[10]={0}, num, i, x;
    char opc;
    x=rand()%11;
    printf("El vector A es:\n");
    for(i=0;i<10;i++)
    {
        A[i]=rand()%11;
		B[i]=rand()%11;
		printf("%d\t", A[i]);
    }
    printf("\nEl vector B es:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t", B[i]);
    }
    printf("\nLa constante (escalar) sera:\t%d", x);
    do
    {
        printf("\na)Suma de vectores \nb)Resta de vectores \nc)Multiplicar un vector por una constante(escalar) \nd)Salir\n");
        fflush(stdin);
        scanf("%c", &opc);
        switch(opc)
        {
            case'a': case'A':   printf("El vector resultante de la suma queda:\n");
                                for(i=0;i<10;i++)
                                {
                                    C[i]=A[i]+B[i];
                                    printf("%d\t", C[i]);
                                }
                                break;
            case'b': case'B':	printf("Ingresa 1 para hacer a-b, cualquier otro b-a\n");
                                scanf("%d", &num);
                                printf("El vector resultante de la resta queda:\n");
                                if(num==1)
                                {
                                    for(i=0;i<10;i++)
                                    {
                                        C[i]=A[i]-B[i];
                                        printf("%d\t", C[i]);
                                    }
                                }
                                else
                                {
                                    for(i=0;i<10;i++)
                                    {
                                        C[i]=B[i]-A[i];
                                        printf("%d\t", C[i]);
                                    }
                                }
                                break;
            case'c': case'C':	printf("Ingresa 1 para multiplicar por el primer vector y cualquier otro se multiplica por el segundo\n");
                                scanf("%d", &num);
                                printf("El vector resultante de la multiplicacion por un escalar queda:\n");
                                if(num==1)
                                {
                                    for(i=0;i<10;i++)
                                    {
                                        C[i]=A[i]*x;
                                        printf("%d\t", C[i]);
                                    }
                                }
                                else
                                {
                                    for(i=0;i<10;i++)
                                    {
                                        C[i]=B[i]*x;
                                        printf("%d\t", C[i]);
                                    }
                                }
                                break;
            case'd': case'D':   printf("Adios\n");
                                break;
            default: printf("Opcion invalida\n");
        }
    }while(opc!='d' && opc!='D');
    return 0;
}
