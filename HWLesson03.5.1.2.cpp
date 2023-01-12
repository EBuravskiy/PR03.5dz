#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 15) {
        printf("%i ", i);
        i++;
    }
    printf("\n");
    i = 2;
    while (i < 15) {
        printf("%i ", i);
        i = i + 2;
    }
    return 0;
}