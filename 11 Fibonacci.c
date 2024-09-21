#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[20]={0,1},term, i;
    printf("¿Cuantos terminos de la serie deseas ver?\n");
    scanf("%d", &term);
    for(i=2;i!=term;i++)
    {
        s[i]=s[i-2]+s[i-1];
    }
    for(i=0;i!=term;i++)
    {
        printf("%d\t", s[i]);
    }
    return 0;
}
