//Write a program to calculate the sum of all numbers from 1 to 100 that are divisible by 7, using a for loop.
//
#include<stdio.h>

int main(){
	int sum=0;
	for (int range=1;range<100;range++){
		if(range % 7 == 0){
			sum +=range;
		}
	}
	printf("%d\n",sum);	
	return 0;
}
