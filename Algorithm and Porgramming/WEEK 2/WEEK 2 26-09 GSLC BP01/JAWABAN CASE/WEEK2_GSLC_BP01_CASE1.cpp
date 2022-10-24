#include<stdio.h>

int main(){
	int a, b;
	int umur;
	
	scanf("%d %d" , &a, &b);
	getchar();
	
	umur = b-a;
	
	printf("%d", umur);
	
	return 0;
}
