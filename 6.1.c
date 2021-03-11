#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 26

int main(void)
{
    char znaki[ROZMIAR];
    int i;
    int ilosc;

    for (i = 0; i < ROZMIAR; i++)
    {
        znaki[i] = 'a' + i;
    }
    for (i = 0; i < ROZMIAR; i++)
    {
        printf("%c", znaki[i]);
    }
    printf("\n");
    return 0;
}
