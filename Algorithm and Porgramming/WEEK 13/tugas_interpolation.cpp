#include<stdio.h>

struct data{
	char nama[30];
	int nilai;
}d;

int interpolationSearch(int a[], int bottom, int top, int item){
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

int main(){
	int num, item, pos, tc;
	printf("Tuliskan banyak input: ");
	scanf("%d", tc);
	
	for(int i = 0; i < tc; i++){
		scanf("%[^\n]", &d.nama);
		scanf("%d", &d.nilai);
	}
	
	printf("\nNilai: ");
	scanf("%d", &d.nilai);
	
	pos = interpolationSearch(&d.nilai, 0, num, item);
	if(pos == -1){
		printf("\n Data not found\n");
	}else{
		printf("\n Nilai: %d\n", item);
	}
	
	
	return 0;
}
