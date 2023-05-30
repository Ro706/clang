/* 10. Write a program to find transpose of a matrix
a. With using different matrix
b. Without using different matrix */
#include <stdio.h>
int main() {
  int row,col;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &row, &col);
  int original[row][col], transpose[col][row];
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("Enter the element at (%d, %d): ", i, j);
      scanf("%d", &original[i][j]);
    }
  }
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      transpose[j][i] = original[i][j];
    }
  }
  
  printf("The transpose of the matrix is:\n");
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      printf("%d \t", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
