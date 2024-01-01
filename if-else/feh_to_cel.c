#include<stdio.h>
int main(){
	int temp;
	printf("Enter a temperature(Fahrenhiet): ");
	scanf("%d",&temp);
	temp = (temp - 32) * 5/9;
	printf("temperature in celsius: %d",temp);
	return 0;
}
