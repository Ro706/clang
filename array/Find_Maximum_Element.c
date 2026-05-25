//Find Maximum Element**: Write a program to find the maximum element in an array.
//      * Input: `arr[] = {10, 20, 30, 40, 50}`
//      * Output: `Maximum element: 50`
#include<stdio.h>

int main(){
	int arr[] = {10,20,30,40,50},size, max;
	size = (sizeof(arr)/sizeof(arr[0]));
	max = arr[0];
 	for (int i=1; i<(size-1);i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("%d\n",max);
	return 0;
}
