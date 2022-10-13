/*
* multiple files
*/


#include <stdio.h>
#include <stdlib.h>
#include "foo.h"

int main() {
    int x = 3;
    int y = 7;
    int sum = 0;

    sum = add(x, y);

    printf("%d \n", sum);
    printf("%d \n", VAL);

    return 0;
}