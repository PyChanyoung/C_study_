#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numPtr;

    numPtr = malloc(sizeof(int));

    *numPtr = 10;

    printf("%d\n", *numPtr);

    return 0;
}