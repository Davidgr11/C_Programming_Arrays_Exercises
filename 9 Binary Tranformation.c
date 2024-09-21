#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[10]={0}, num, i=0;
    printf("Dame el numero a convertir\n");
    scanf("%d", &num);
    while(i<10 && num!=0)
    {
        d[i]=num%2;
        num=num/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
        printf("%d\t", d[i]);
    return 0;
}
