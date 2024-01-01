#include<stdio.h>
int main(){
        int num1 , num2 , num3;
        printf("Enter a 1st number:");
        scanf("%d",&num1);
        printf("Enter a 2nd number:");
        scanf("%d",&num2);
	printf("Enter a 3rd number:");
        scanf("%d",&num3);
        if(num1>num2 && num1>num3)
                printf("max number is %d",num1);
	else if(num2>num1 && num2>num3)
                printf("max number is %d",num2);
	else
		printf("max number is %d",num3);
        return 0;
}
