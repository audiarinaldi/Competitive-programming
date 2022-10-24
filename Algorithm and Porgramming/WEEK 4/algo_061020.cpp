#include<stdio.h>

int main(){
	/*
	//PRINT ANGKA, a = A, b = BEDA, n = JUMLAH
	int n = 8;
	int i = 0, a, b;
	
	//a = 4
	//b = 4
	//n = 5
	// 4 8 12 16 20
	// 4 8 boom 16 20
	scanf("%d %d %d", &a, &b, &n);
	
	for(i=0; i<n; i++)
	{
		if(a%3 == 0) 
			printf("BOOM");
		else
			printf("%d" , a);
		a = a + b;
		
	}
	*/
	//============================================
	
	//BIKIN SHAPE KOTAK TENGAHNYA BOLONG
	
	int i, j;
	scanf("%d" , &n);
	
		
	for( i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("*");
		else
			printf(" ");
		}
		printf("\n");
	}
	
	//BIKIN BINTANG BINTANG X
	int i, j;
	scanf("%d" , &n);
	
		
	for( i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if( i == j; || (i+j) == (n-1)))
			printf("*");
		else
			printf(" ");
		}
		printf("\n");
	}
	
	//===================================================
	
	//DO WHILE UNTUK VALIDASI
	
	return 0;
}
