#include <stdio.h>
#define RZEDY 5
#define ZNAKI 5
int main(void)
{
    int rzad;
    int znaki;

    for(rzad = 0; rzad <= RZEDY; rzad++)
    {
        for (znaki = 0; znaki < rzad; znaki++)
        {
        printf("%$", znaki);
        }
        printf("\n");
    }
    return 0;
}
