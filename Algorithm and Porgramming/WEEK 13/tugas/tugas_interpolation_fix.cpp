#include<stdio.h>

int interpolationSearch(int arr[], int key, int n){
	int mid;
	while (bottom <= top)
	{
		mid = bottom + (top - bottom) * ((item - a[bottom]) / (a[top] - a[bottom]));
		if (item == a[mid])
			return mid + 1;
		if (item < a[mid])
			top = mid - 1;
		else
			bottom = mid + 1;
	}
	return -1;
}

struct data{
	char nama[30];
	int nilai;
}d;

int main(){
	printf("masukkan nama: ");
	scanf("%d", &d.nama);
	printf("masukkan nama: ");
	scanf("%d", &d.nilai);
	
	idx = interpolationSearch(arr,key,n);
	if(idx == 1)
		printf("data not found");
	else
		printf("key %d ada di index %d\n", key, idx);
	
	return 0;
}
