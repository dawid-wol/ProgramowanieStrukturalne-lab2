#include <stdio.h>
#include <stdlib.h>

int main()
{
 int podstawa,i;
    int wynik =1;
    printf("Podaj liczbe: ");

    for(;scanf("%d", &podstawa)==1;)
    {
        for(i=1;i<=podstawa;i++)
         wynik=podstawa*i;

    printf("%d, %d, %d\n",podstawa,wynik, podstawa*podstawa*podstawa);

    printf("Podaj liczbe: ");
}
return 0;
}
