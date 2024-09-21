#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5]={0}, a, i=0, val;
    while(i<5)
    {
        a=2;
        printf("Dame un numero primo que no sea el 1\n");
        scanf("%d", &val);
        while(val%a!=0)
        {
            a=a+1;
        }
        if(val==a)
        {
            v[i]=val;
            i=i+1;
        }
        else
        {
            printf("No es primo\n");
        }
    }
    printf("El vector queda:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t", v[i]);
    }

    return 0;
}
