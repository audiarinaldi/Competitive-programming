#include<stdio.h>

void printArray(int numbers[], int n){
	for(int i = 0; i < n; i++){
		printf("%d", numbers);
	}
}

void swap(){
	
}
int partition(int arr[], int startIdx, int endIdx){
	int pivot = arr[endIdx];
	int i = startIdx - 1;
	
	for(int j = startIdx; j < endIdx; j++){
		if(arr[j] < pivot){
			i ++;
			swap(&arr[j], &arr[i]);
		}
	}
	i++;
	swap(&arr[endIdx], &arr[i]);
	return i;
}

void quickSort(int arr[], int startIdx, int endIdx){
	if(startIdx >= endIdx) return;
	
	int pivot = partition();
	quickSort(arr, startIdx, pivot - 1);
	quickSort(arr, pivot + 1, endIdx);
}
int main(){
	int numbers = {7, 1, 6, 2, 3, 5, 4};
	int n = 7;
	
	printArray(numbers, n);
	quicSort(numbers);
	printArray(numbers, n);
	
	int idx = binarySeach(numbers);
	return 0;
}

