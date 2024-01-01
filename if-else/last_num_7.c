#include<stdio.h>
int main(){
	int num,temp;
	printf("Enter a number : ");
	scanf("%d",&num);
	temp = num %10;
	if(temp == 7)
		printf("last number is 7");
	else 
		printf("last number is not 7");
	return 0;
}
