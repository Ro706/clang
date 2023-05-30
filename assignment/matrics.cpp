/*Assume you have an assignment of mathematics, where you need to calculate the addition
and subtraction of two matrices. Write a program that takes input for two matrices and
calculates addition and subtraction of both matrices and stores it in different matrices and
print later.*/
#include<stdio.h>
int main(){
	int row,col;
	printf("Enter a number for row and col of matrices:");
	scanf("%d %d",&row,&col);
	int matrix1[row][col],matrix2[row][col],matrix_add[row][col],matrix_sub[row][col];
	printf("Enter a value for matrics 1\n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("Enter a element of matrix whose row is %d and col is %d :",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter a value for matrics 2\n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("Enter a element of matrix whose row is %d and col is %d :",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("Addition of matrics\n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			matrix_add[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			matrix_sub[i][j]=matrix1[i][j]-matrix2[i][j];
		}
	}
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("%d \t",matrix_add[i][j]);
		}
		printf("\n");
	}
	printf("Substraction of matrics\n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("%d \t",matrix_sub[i][j]);
		}
		printf("\n");
	}
	
}
