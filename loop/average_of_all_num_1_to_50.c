//Write a program to calculate the average of all numbers from 1 to 50 using a while loop.
//


#include<stdio.h>

int main(){
	int sum=0,avg=0;
	for (int range = 1;range<=50;range++){
		sum += range;
	}
	avg = (sum/25);
	printf("%d\n",avg);
	return 0;
}
