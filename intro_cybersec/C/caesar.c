#include <stdio.h>
#include <stdlib.h>

int *caesar_cipher(int key, int text[], int size, int encrypt){
    int i;
    int *out_txt = (int *) malloc(size * sizeof(int));
    // what about decrypt?
    for(i=0; i<size; i++){
        // fill in code for the rotate
    }

    return out_txt;
}

void print_text(int *text, int size){
    int i;
    for (i=0;i<size; i++){
        printf("%d, ", text[i]);
    }
    printf("\n");
    return;
}

int main() {
    int plain_txt[] = {1,2,9,0};
    int key = 3;
    int size = 4;

    int *cipher_txt;

    cipher_txt = caesar_cipher(key, plain_txt, size, 0);
    print_text(cipher_txt, size);

    free(cipher_txt); //no memory leak
    cipher_txt = NULL;

    return 0;
}