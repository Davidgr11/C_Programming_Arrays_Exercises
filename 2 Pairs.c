#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10]={0}, num, i=0;
    printf("Llenado de vector con solo pares\n");
    while(i<10)
    {
        printf("Ingresa un numero\n");
        scanf("%d", &num);
        if(num%2==0)
        {
            v[i]=num;
            i=i+1;
        }
    }
    for(i=0;i<10;i++)
        printf("%d\t", v[i]);
    return 0;
}
