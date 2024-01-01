#include<stdio.h>
int main(){
	int num ;
	printf("Enter a number: ");
	scanf("%d",&num);
	if((num%5==0) && (num%11==0))
	       printf("Enter number is  div by 5 and 11");
        else 
	       printf("Enter number is not  div by 5 and 11");
        return 0;
}	
