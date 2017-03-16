#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ex1()
{
srand(time(NULL));
int i=10;
    while (i --> 0)
        printf("%d\n",rand());

    return 0;
}

