#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j, band=1;
    char p[30]={' '}, letra;
    printf("Dame una letra de la frase\n");
    scanf("%c", &letra);
    while(i<30 && letra!='.')
    {
        p[i]=letra;
        i++;
        printf("Dame la siguiente letra de la frase o '.' para salir\n");
        fflush(stdin);
        scanf("%c", &letra);
    }
    j=0;
    i=i-1;
    while(j<=1 && band==1)
    {
        if(p[j]==p[i])
        {
            j++;
            i--;
        }
        else
        {
            band=0;
        }
    }
    if(band==1)
    {
        printf("Es un palindromo\n");
        for(i=0;i<30;i++)
        {
             printf("%c", p[i]);
        }
    }
    else
    {
        printf("No es un palindromo\n");
    }
    return 0;
}

