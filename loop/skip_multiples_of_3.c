// Write a program to print the numbers from 1 to 20, but skip the multiples of 3, using a while loop.
//

#include<stdio.h>

int main(){
	int range=1;
	while(range<21){
		if(range % 3 != 0){
		printf("%d\n",range);
		}
		range++;	
	}
	return 0;
}
