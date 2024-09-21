#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vp[10]={0}, vn[10]={0}, i=0, a=0, num, k;
    while(i<10 && a<10)
    {
        printf("Dame un valor\n");
        scanf("%d", &num);
        if(num%2==0)
        {
            vp[i]=num;
            i=i+1;
        }
        else
        {
            vn[a]=num;
            a=a+1;
        }
    }
    for(k=0;k<i;k++)
    {
        printf("%d\t", vp[k]);
    }
    printf("\n");
    for(k=0;k<a;k++)
    {
        printf("%d\t", vn[k]);
    }
    return 0;
}
