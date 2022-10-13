#include <stdio.h>
#include <string.h>

int add(int x1, int x2){
    return x1 + x2;
}

int main() {
    int a = 0;
    int ar[10];
    char str1[10] = "abcd";
    printf(" sizeof = %ld\n", sizeof(str1)/sizeof(str1[0]));
     printf("strlen %ld\n ", strlen(str1));
    //printf("enter a number\n"); 
    //scanf("%d", &a);


    int b = 7;
    int c = add(a, b);

    //printf("the sum is %d\n", c);
    return 0;
}