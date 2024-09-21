#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10]={0}, band=0, a=0, b=9, i, val;
    for(i=0;i<10;i++)
    {
        printf("Dame un valor\n");
        scanf("%d", &val);
        if(band==0)
        {
            v[a]=val;
            a++;
            band=1;
        }
        else
        {
            v[b]=val;
            b--;
            band=0;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t", v[i]);
    }
    return 0;
}
