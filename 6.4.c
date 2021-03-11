#include <stdio.h>

int main ()
  {
   int a,b,c,x,y;
   char z;

   scanf(" %c",&z);
   for(y=z-'A',x=2*y,a=0;a<=y;++a,putchar('\n'))
    for(b=0;b<=x;++b) putchar((c=(b<y?b:x-b)+a-y)<0?' ':('A'+c));

   return 0;
  }
