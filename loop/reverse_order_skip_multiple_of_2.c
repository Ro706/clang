// Write a C program to print the numbers from 20 to 1 in reverse order, but skip the multiples of 2, using a for loop.
//

#include<stdio.h>

int main(){
	for(int range=20;range>=1;range--){
		if(range % 2 != 0){
			printf("%d\n",range);
		}

	}
	return 0;
}
