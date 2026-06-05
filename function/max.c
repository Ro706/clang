#include<stdio.h>

int max(int *arr, int size){
	int max = arr[0];
	for(int i=1 ; i< size ; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}

	return max;
}

int main(){
	int size;
	printf("Enter size of the Array: ");
	scanf("%d",&size);
	int arr[size];
	for (int i = 0 ; i < size;i++){
		printf("Enter the array element %d: ",i);
		scanf("%d",&arr[i]);
	}
	int maxelement = max(arr,size);
	printf("Max Element is %d",maxelement);
	return 0;
}
