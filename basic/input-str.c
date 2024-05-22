#include<stdio.h>
void main(){
	char name[20]; //array
	printf("Enter your name:");
	scanf("%[^\n]s",&name); //reads a string until it encounters a newline character.
	printf("hello %s",name); //printing the string (%s)
}
