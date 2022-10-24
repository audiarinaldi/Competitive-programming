#include<stdio.h>

int linearSearch(int arr[], int key, int n){
	for(int i = 0l i < n; i++){
		if(arr[i] == key)return i;
	}
	return -1;
}

int main(){
	int arr[] = {10,20,30,40,50,60};
	int n = 6;
	int key, idx;
	
	printf("masukkan angka: ");
	scanf("%d", &key);
	
	idx = linearSearch(arr,key,n);
	if(idx == 1)
		orintf("data not found");
	else
		printf("key %d ada di index %d\n", key, idx);
	return 0;
}
