#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[]) {
int main(void) {
  // creating a FILE variable
  FILE *fptr;
  int row1[] = {0,0,0,0,0};
  int row2[] = {0,1,0,1,0};
  int row3[] = {0,0,1,1,0};
  int row4[] = {0,0,1,0,0};
  int row5[] = {0,0,0,0,0};  
  // integer variable
  int num;
  
  // open the file in write mode
  fptr = fopen("data1.txt", "w");
  
  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occurred
    return -1;
  }
  
  // enter integer numbers
    for  (int i = 0; i < 5; i++) {
        putw(row1[i], fptr);
    }

    for  (int i = 0; i < 5; i++) {
        putw(row2[i], fptr);
    }

    for  (int i = 0; i < 5; i++) {
        putw(row3[i], fptr);
    }

    for  (int i = 0; i < 5; i++) {
        putw(row4[i], fptr);
    }

    for  (int i = 0; i < 5; i++) {
        putw(row5[i], fptr);
    }

  // close connection
  fclose(fptr);
  
  // open file for reading
  fptr = fopen("data1.txt", "r");
  
  // display numbers
  printf("\nNumbers:\n");
  while ( (num = getw(fptr)) != EOF ) {
    printf("%d\n", num);
  }
  
  printf("\nEnd of file.\n");
  
  // close connection
  fclose(fptr);
  
  return 0;
}

}