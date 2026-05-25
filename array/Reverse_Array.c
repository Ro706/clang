//Reverse Array**: Write a program to reverse the elements of an array.
// 	* Input: `arr[] = {1, 2, 3, 4, 5}`
//	* Output: `arr[] = {5, 4, 3, 2, 1}`
#include<stdio.h>

int main(){
	int arr[]={1,2,3,4,5},size;
	size = (sizeof(arr)/sizeof(arr[0]));
	for(int index=(size-1);index>=0;index--){
		printf("%d ",arr[index]);
	}
	printf("\n");
	return 0;
}	
