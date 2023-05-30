#include<stdio.h>
int main(){
	int name[20];
	printf("Enter your name:");
	scanf("%[^\n]s",&name);
	printf("my name is %s",&name);
	return 0;
}
