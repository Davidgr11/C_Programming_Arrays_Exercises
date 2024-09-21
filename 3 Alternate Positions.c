#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10]={0}, i;
    for(i=0;i<5;i++)
    {
        printf("Dame dos valores\n");
        scanf("%d %d", &v[i], &v[9-i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t", v[i]);
    }
    return 0;
}
