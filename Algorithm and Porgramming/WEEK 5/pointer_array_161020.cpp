#include<stdio.h>
#include<string.h>
/*
int main(){
	//ARRAY
	int a[10];
	char kata[50];
	
	scanf("%[^\n]", kata); //biar kebaca dan berhenti sampe enter
	//gets(kata);
	

	scanf("%s", kata);
	for(int i = 0; i < 10; i++){
		printf("%c\n", kata[i]);
	}
	
	length = strlen(kata);
	//NGEPRINT KEBALIK
	for (int i=length-1; i>=0; i--){
		printf("%c", kata[i]]);
	}
	
	//GANTI HURUF JADI ANGKA
	for(int i=length-1; i>=0; i--){
		if(kata[i]=='a', kata[i] == 4)
	}
	
//	a[0] = 10;
//	a[1] = 20;
//	a[6] = 90;
//	for(int i = 0; i < 10; i++){
//		printf("%d\n", a[i]);
//	}
	*/
	//==========================================================
	
	//CONTOH PROGRAM
	
//	void formatCurrency(int a){
//		printf("Rp. %d,00", a);
//	}
//	
//	int sum(int num[], int n){
//		int total = 0;
//		for (int i=0; i<n; i++){
//			total = total + num[i];
//		}
//		return total;
//	}
	
	int  isValidPlat(char plat[]){
		if(strlen(plat)!=6)
			return 0;
		else if (plat[0] < 'A' || plat[0]>'Z')
			return 0;
		else if (plat[4] < 'A' || plat[4]>'Z')
			return 0;
		else if (plat[5] < 'A' || plat[5]>'Z')
			return 0;
		
		for(int i=1; i<=3;i++){
			if(plat[i] < '0' || plat[i] > '9')
			return 0;
		}
			return 1;
	}
	
	int main(){
////	int nilai[5] = {1, 2, 4, 5};
////	char nama[10][50];
////	int total, length;
//	
////	formatCurrency(2000);
//	total = sum(nilai,4);
//	printf("%d\n", total);
//	
	char plat[8];
	
	do{
		printf("Masukkan plat nomor [CDDDCC]: ");
		scanf("%s", plat);
	}while(!isValidPlat(plat)){
		return 0;
	}

	
	scanf("%s", plat);
	if(!isValidPlat(plat)){
		printf("plat salah");
	}else{
		printf("plat benar");
	}
	
	return 0;
	}
