#include <stdio.h>
#define RZEDY 6

int main(void)
  {
   int y,x;
   for(y = 0; y < RZEDY; ++y, putchar('\n'))
    for(x = 0; x <= y; ++x) putchar('F'-x);
   return 0;
  }
