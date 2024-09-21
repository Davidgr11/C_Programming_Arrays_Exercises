#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10]={0}, i, ac=0, cont=0;
    float prom;
    for(i=0;i<10;i++)
    {
        printf("Dame la calificacion\n");
        scanf("%d", &v[i]);
        ac=ac+v[i];
    }
    prom=(float)ac/10;
    printf("El promedio es\t %f\n", prom);
    for(i=0;i<10;i++)
    {
        if(v[i]>prom)
        {
            printf("Calificacion  %d\n", v[i]);
            cont=cont+1;
        }
    }
    printf("EL total de las calificaciones mayores al promedio son\t%d", cont);
    return 0;
}
