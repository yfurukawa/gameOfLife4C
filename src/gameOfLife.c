#include <stdio.h>
#include "gameOfLife.h"

void run() {
  char field[20][20]; // The field of game of life
  char nfield[20][20];
  int x, y;
  int count;

  // Initialize field.
  int i, j;
  for(i = 0; i < 20; i++) {
    for(j = 0; j < 20; j++) {
      field[i][j] = '-';
      nfield[i][j] = '-';
    }
  }

  printf("Input default alive cell location.(x,y)\n");
  printf("When input number 99, setting is finished.\n");
  while(1) {
    printf("x, y = ");
    scanf("%d%d", &x, &y);
    if(x == 99 || y == 99) {
      break;
    }
    field[x][y] = '*';
  }

  // Display Initial Field.
  for(i = 0; i < 20; i++) {
    for(j = 0; j < 20; j++) {
      printf("%c", field[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  while(1){
    // Decide next life.
    for(i = 0; i < 20; i++) {
      for(j = 0; j < 20; j++) {
        count = 0;

        if((i - 1 < 0) || (j -1 < 0)) {
          ;
        }
        else if(field[i-1][j-1] == '*') {
          count++;
        }
        if(j -1 < 0) {
          ;
        }
        else if(field[i][j-1] == '*') {
          count++;
        }
        if((i + 1 > 20) || (j -1 < 0)) {
          ;
        }
        else if(field[i+1][j-1] == '*') {
          count++;
        }

        if(i - 1 < 0) {
          ;
        }
        else if(field[i-1][j] == '*') {
          count++;
        }
        if(i + 1 > 20) {
          ;
        }
        else if(field[i+1][j] == '*') {
          count++;
        }

        if((i - 1 < 0) || (j + 1 > 20)) {
          ;
        }
        else if(field[i-1][j+1] == '*') {
          count++;
        }
        if(j + 1 > 20) {
          ;
        }
        else if(field[i][j+1] == '*') {
          count++;
        }
        if((i + 1 > 20) || (j + 1 > 20)) {
          ;
        }
        else if(field[i+1][j+1] == '*') {
          count++;
        }

        if(count == 3 ) {
          nfield[i][j] = '*';
        }
        else if(count == 2 && field[i][j] == '*') {
          nfield[i][j] = '*';
        }
        else {
          nfield[i][j] = '-';
        }
      }
    }

    // copy next generation field.
    for(i = 0; i < 20; i++) {
      for(j = 0; j < 20; j++) {
        field[i][j] = nfield[i][j];
      }
    }

    // Display Field
    for(i = 0; i < 20; i++) {
      for(j = 0; j < 20; j++) {
        printf("%c", field[i][j]);
      }
      printf("\n");
    }

    for(i = 0; i < 10000; i++) {
      for(j = 0; j < 10000; j++) {
        ;
      }
    }
  }

}
