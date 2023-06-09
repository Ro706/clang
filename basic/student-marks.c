#include<stdio.h>
void main(){
 	 float english,maths,computer,physics,total;
 	 printf("Enter a marks for maths:");
       	 scanf("%f",&maths);
	 printf("Enter a marks for physics:");
	 scanf("%f",&physics);
	 printf("Enter a marks for english:");
	 scanf("%f",&english);
	 printf("Enter a marks for computer:");
	 scanf("%f",&computer);
	 printf("total marks is \t");
	 total = maths+english+physics+computer;
	 printf("%.2f",total);
}
