//Replace Element in Array**: Write a program to replace an element in an array.
//      * Input: `arr[] = {10, 20, 30, 40, 50}`, `element = 30`, `new_element = 60`
//	* Output: `arr[] = {10, 20, 60, 40, 50}`

#include<stdio.h>

int main(){
	int arr[]={10,20,30,40,50};
	int size = (sizeof(arr)/sizeof(arr[0]));
	for(int i = 0; i < (size-1) ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i = 0 ; i < (size-1);i++){
		if(arr[i]==30){
			arr[i] = 60;
		}
	}
	for(int i = 0;i < (size-1); i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
