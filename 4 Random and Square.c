#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v1[10]={0}, v2[10]={0}, i;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        v1[i]=rand()%11;
        v2[i]=pow(v1[i], 2);
        printf("%d\t", v1[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t", v2[i]);
    }
    return 0;
}
