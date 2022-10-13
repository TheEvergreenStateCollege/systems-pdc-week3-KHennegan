#include <stdio.h>
#include <stdlib.h>

struct number {
    int val;
    char name[20];
} num2;

typedef struct number number_T;

number_T *ptr_num;

number_T num2;

// you can use int *array instead
void init_array(int size, int array[]) {
    int i;
    // loop
    for (i=0; i<size; i++){
        array[i] = i;
    }
    return;
}

void print_array(int size, int *array) {
    int i;

    for (i=0; i<size; i++){
        printf("%d, ", array[i]);
    }
    return;
}

void swap(int *a, int *b) {
    //fill in the code

}

int main(int argc, char *args[]) {
    int *ptr;
    int x = 3;

    ptr = &x;

    // change x:

    printf("x = %d, ptr = %p\n", x, ptr);

    struct number_T *ptr_n;
    struct number_T num;
    num.val = 7;
   

    // extra stuff
    ptr_n = malloc(sizeof(struct number_T));

    ptr_n -> val = 5;
    printf("value = %d,  pointer = %p\n", ptr_n -> val, ptr_n);
    printf("value = %d,  pointer = %p\n", num.val, &num); 

    return 0;
}