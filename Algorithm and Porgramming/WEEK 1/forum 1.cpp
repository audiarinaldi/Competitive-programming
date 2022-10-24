#include<stdio.h>

int main()
{
	int jual;
	int beli;
	int selisih = jual-beli;
	
	printf("Masukkan Harga Beli: ");
	scanf ("%d" , &beli);
	printf("Masukkan Harga Jual: ");
	scanf ("%d" , &jual);
	
	if(selisih>0){
		printf("Untung: %d " , selisih);
		//scanf("%d", selisih);
	} else if (selisih<0){
		printf("Rugi: ");
		scanf("%d", selisih);
	} else {
		printf("Break Even");
	}
	return 0;
}
