//To check weather a number is odd or even
#include<stdio.h>
int main(){
	int number ;
	printf("Enter a number :");
	scanf("%d",&number);
	if (number%2==0){
		printf("Even");
	}else{
		printf("Odd");
	}
	return 0;
}
