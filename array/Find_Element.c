//Find Element in Array**: Write a program to find an element in an array.
//      * Input: `arr[] = {10, 20, 30, 40, 50}`, `element = 30`
//      * Output: `Element found at index 2`

#include<stdio.h>
int main(){
	int arr[]={10,20,30,40,50}, element = 30;
	int size = ( sizeof(arr)/sizeof(arr[0]));
	for(int i = 0; i < (size) ; i++){
		if (element == arr[i]){
			printf("%d\n",i);	
		}
	}
	return 0;
}
