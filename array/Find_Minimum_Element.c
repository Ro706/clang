//Find Minimum Element**: Write a program to find the minimum element in an array.
//       * Input: `arr[] = {10, 20, 30, 40, 50}`
//       * Output: `Minimum element: 10`
#include<stdio.h>

int main(){
	int arr[]={10,20,30,40,50},min=0;
	int size = (sizeof(arr)/sizeof(arr[0]));
	min = arr[0];
	for(int i = 1;i<(size-1);i++){
		if (min>arr[i]){
			min = arr[i];
		}
	}	
	printf("%d\n",min);
	return 0;
}
