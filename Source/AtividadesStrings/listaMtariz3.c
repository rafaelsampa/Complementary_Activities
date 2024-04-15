#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int mat[5][5], int bike, int bomb);
void show(int mat[5][5]);

int main() {

  int grid[5][5];
  int empty = 0;
  int bike = 5; // 1
  int bomb = 5; // 2
  int lifes = 5;
  int chances = 10;

  srand(time(0));

  fill(grid, bike, bomb);
  show(grid);

  return 0;
}

void fill(int mat[5][5], int bike, int bomb) {
  int i, j, l, c, randNum = 0;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      mat[i][j] = 0;
    }
  }
  while (bike > 0 || bomb > 0) {
    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        
        l = rand() % 5;
        c = rand() % 5;
        randNum = rand() % 3;
        
        if(l == i && c == j){
          if (randNum == 1 && bike >= 0) {
            mat[i][j] = randNum;
            bike--;
          } else if (randNum == 2 && bomb >= 0) {
            mat[i][j] = randNum;
            bomb--;
          }
        }
      }
    }
  }
}
void show(int mat[5][5]) {
  printf("\n\n      1   2   3   4   5\n   ______________________\n");
  int i, j;
  for (i = 0; i < 5; i++) {
    printf("%d | ", i + 1);
    for (j = 0; j < 5; j++) {
      printf(" •%d ", mat[i][j]);
    }
    printf(" |\n  |\t\t\t\t\t\t |\n");
  }
}