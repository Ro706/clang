#include<stdio.h>
int main(){
        int num,temp,n=2;
        printf("Enter a number: ");
        scanf("%d",&num);
        temp = num;
        while (n){
                temp = num % 10;
                num = num/10;
                n-=1;
        }
        if(temp == 3)
                printf("2nd Last digit is 3");
        else
                printf("2nd Last digit is not 3");
        return 0 ;
}
