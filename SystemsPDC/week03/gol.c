/**
* Conway's Game of Life
* sequential version
* try padding the board with a border of 0s
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
void print_board_indices(short **board, int xlimit, int ylimit) {
  
   int i,j;
  for (i = 0; i < xlimit; i++) {
    for (j = 0; j < ylimit; j++) {
      if (board[i][j] == 1) { //don't we need to print spaces for the dead cells too?
	printf("%d %d\n", i, j);
      }
    }
  }
}*/

void print_board(short **board, int xlimit, int ylimit) {  //a second board limit??
   /* print out final board */
   int i,j;
  for (i = 1; i < xlimit -1; i++) {
    for (j = 1; j < ylimit -1; j++) {
    	printf("%d ", board[i][j]);
    }
    printf("\n");
  }
}

void init_board(short **board, int *xlimit, int *ylimit, FILE *fd) {
  char filename[64];
 /* initialize board1 with input data by allowing user to select file to open */
  
  printf("Input the name of your game seed(omit .txt): ");
  scanf("%s", filename);

  if (strlen(filename) > 59) { //error catch file string length
    printf("Please name your file something less weird ._.\n");
    exit;
  }

  strcat(filename, ".txt");
  fd = fopen(filename, "r"); //read our data file
 
    if (NULL == fd) { //error catch
        printf("file can't be opened \n");
    }

  printf("Input the number of rows: ");
  scanf("%d", xlimit);
  printf("Input the number of columns: ");
  scanf("%d", ylimit);




//input the file data into our 2D array board
  for (int i = 0; i < *xlimit; i++) {
    for (int j = 0; j < *ylimit; j++) {
      char c = fgetc(fd);
      int z = c - '0'; //prevents it being an ascii value somehow
        if (z != -1) {
          board[i][j] = (short) z;
          //printf("The value of [%hd][%hd] is: %d\n", i, j, b1_rows[i][j]);
        }
    }
  } 

}


int main (int argc, char* argv[]) {

  char *fval;
  FILE *fd;
  int xlimit, ylimit, iterations, iter;
  int *xlim = &xlimit, *ylim= &ylimit;
  short *board1_data = NULL, *board2_data = NULL;
  short **b1_rows, **b2_rows;
  short **oldb = NULL, **newb = NULL, **tempb;
  int i, j, x, y, count;
  

  /* you can initialize the input for development*/
  xlimit = 5;
  ylimit = 5;
  iterations = 2;

  /* if you read from the command line */
  


  /* allocate space and initialize board to all 0's */
  board1_data = (short *) calloc(xlimit * ylimit, sizeof(short));
  if (board1_data == NULL) {
    fprintf(stderr, "Allocation failed for board1\n");
    exit(-1);
  }
  board2_data = (short *) calloc(xlimit * ylimit, sizeof(short));
  if (board2_data == NULL) {
    fprintf(stderr, "Allocation failed for board1\n");
    exit(-1);
  }

  /* row pointers */
  b1_rows = (short **) malloc(xlimit * sizeof(short*));
  b1_rows[0] = board1_data;
  for (i = 1; i < xlimit; i++) {
    b1_rows[i] = b1_rows[i-1] + ylimit; //what is this!!??
  }
  b2_rows = (short **) malloc(xlimit * sizeof(short*));
  b2_rows[0] = board2_data;
  for (i = 1; i < xlimit; i++) {
    b2_rows[i] = b2_rows[i-1] + ylimit;
  }

//allow user to input the file name to create the game seed
init_board(b1_rows, xlim, ylim, fd);
  /* initialize board1 with input data */ //add function that allows you to choose a starting file?
  /*fd = fopen("data.txt", "r"); //read our data file
 
    if (NULL == fd) { //error catch
        printf("file can't be opened \n");
    } 

//input the file data into our 2D array board
  for (i = 0; i < xlimit; i++) {
    for (j = 0; j < ylimit; j++) {
      char c = fgetc(fd);
      int z = c - '0'; //prevents it being an ascii value somehow
        if (z != -1) {
          b1_rows[i][j] = (short) z;
          //printf("The value of [%hd][%hd] is: %d\n", i, j, b1_rows[i][j]);
        }
    }
  } */
  
  //Print starting board. must be adjusted for boundry rows
  oldb = b1_rows;
  newb = b2_rows;
  print_board(oldb, xlimit, ylimit);

  /* perform the iterations, each time switching boards */
  for (iter = 0; iter < iterations; iter++) {
    
    /* compute the new board, using an array of index values representing the indicies of the neighbors */
    for(int i = 1; i < xlimit - 1; i++){
      for(int j=1; j < ylimit - 1; j++){
        short cell = oldb[i][j];
        int neighbors = 0;
        int row[] = {i-1, i, i+1};
        int col[] = {j-1, j, j+1};

        //collect the total of live cells neighboring the cell
        for(int r = 0; r < 3; r++) {
          for(int c=0l; c<3; c++){
            neighbors += oldb[row[r]][col[c]]; 
          }
        }
        //delete the cell's value from our total
        neighbors -= (int) cell;

        //assign cell a new value 
        if ( neighbors == 2 || neighbors == 3) { //cell should live
            newb[i][j] = 1;
        } else { //cell should die
            newb[i][j] = 0;
        }

      }
    }

    //print the new board
    print_board(newb, xlimit, ylimit);

    
    /* switch boards */ 
    tempb = oldb;
    oldb = newb;
    newb = tempb;

   
    }

    
    

  }

 

