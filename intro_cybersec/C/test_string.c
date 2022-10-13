#include <stdio.h>

int main(){
    char before[4] = "aaaa";
    char name[3] = "hi5";
    char after[4] = "bbbb";

    printf("before: %s\n", before);
    for (int i=0; i<7; i++) {
        printf("%c\n", before[i]);
    }

    printf("name: %s\n", name);
    printf("name\n");
    for (int i=0; i<7; i++) {
        printf("%c\n", name[i]);
    }

    printf("after: %s\n", after);
    for (int i=0; i<7; i++) {
        printf("%c\n", after[i]);
    }
    return -1;

}