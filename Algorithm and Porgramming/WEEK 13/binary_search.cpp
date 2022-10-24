#include<stdio.h>

//BINARY SEARCH = proses nyari lewat nilai tengah (mid)
//bates ujung biasa disebut min max atau left right
// mid = (min+max)/2

int binarySearch(int arr[], int key, int n){
	int left = 0;
	int right = n-1;
	int mid;
	
	while(left <= right){
		mid = (left+right)/2;
		if(arr[mid] == key) return mid;
		else if(arr[mid] < key)left = mid +1;
		else right = mid - 1;
	}
	return -1;
}


int main(){
	
	return 0;
}
