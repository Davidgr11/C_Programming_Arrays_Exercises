#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char cad[20], cad;
    printf("Dame una frase\n");
    gets(cad);
    //scanf("%s", &c);
    printf("\n%s\n%s", cad, cad);
    //puts(c);
    x=strlen(cad);
    printf("\nLongitud\t%d\n", x);
    printf("El ultimo caracter es %c", cad(strlen(cad)-1));

    return 0;
}
Leer una frase….
Desplegar la longitud que tiene
Leer una segunda frase
Compararla con la primera.
Desplegar la longitud mayor y la palabra alfabéticamente mayor
Convertir una frase a mayúscula
Declarar una tercera frase
Copiar la primera

LEER UNA FRASE Y VALIDAR SI ES UN PALINDROMO….
RECUERDA QUE PUEDES LEER FRASES QUE TIENEN ESPACIO.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char pax[20],paly[20],palz[20];
    printf("\n ingresa una frase ");
    fflush(stdin);
    gets(pax);
    printf("\n Ingresa segunda frase ");
    fflush(stdin);
    scanf("%s",paly);
    printf("\n%s \n %s\n",pax,paly);
    printf("La primer cadena mide %d",strlen(pax));
    if(strcmp(pax,paly)==0)
    {
        printf("\n las cadenas son iguales");
    }
    else
    {


        if (strcmp(pax,paly)>0)
        {
            printf("\n la cadena %s es mayor ",pax);
        }
        else
        {
            printf("\n la cadena %s es mayor ",paly);
        }
    }
    if (strlen(pax)>strlen(paly))
    {
        printf("\n La cadena %s es m�s larga que la cadena %s\n",pax,paly);
    }
    else
    {
         printf("\n La cadena %s es m�s larga que la cadena %s\n",paly,pax);
    }
    strupr(pax);
    printf("\n la primer cadena se modifico %s",pax);
    strcpy(palz,pax);
    printf("\n %s\t%s\t%s\n",pax,paly,palz);
    strcat(palz," ");
    strcat(palz,paly);
    printf("\n %s\t%s\t%s\n",pax,paly,palz);
    strncat(paly,pax,2);
     printf("\n %s\t%s\t%s\n",pax,paly,palz);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pal[60];
    int i=0,j,band=0;
    printf("Ingresa una frase\n");
    fflush(stdin);
    gets(pal);
    j=strlen(pal)-1;
    while(i<j && band==0)
    {
        if(pal[i]==pal[j])
        {
            i++;
            j--;
        }
        else
        {
            if (pal[i]==' ')
            {
                i++;
            }
            else
            {
                if (isspace(pal[j])!=0)
                {
                    j--;
                }
                else
                {
                    band=1;
                }
            }
        }
    }
    if (band==1)
    {
        printf("\n La frase no es palindroma");
    }
    else
    {
        printf("\n La frase es palindroma");
    }

    return 0;
}
