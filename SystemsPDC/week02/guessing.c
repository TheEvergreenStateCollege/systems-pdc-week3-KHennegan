#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess1 = 0, guess2 = 0;
    int rand1 = rand() % 10 + 1;
    int rand2 = rand() % 10 + 1;

    printf("%d  %d\n", rand1, rand2);

    printf("Please enter 2 integers from 1 to 10: ");
    scanf("%d", &guess1);

    printf("%d \n", guess1);

    return 0;
}