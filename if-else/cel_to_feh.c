#include<stdio.h>
int main(){
	int temp;
	printf("Enter a temperature(celsius): ");
	scanf("%d",&temp);
	temp = temp *9/5 + 32;
	printf("temperature in fahrenheit is : %d",temp);
	return 0;
}
