#include<stdio.h>
#include<string.h>

void cetak(int a){
	a = 90;
	printf("hallo %d", a);
}

int inputInt(char kata[], int min, int max){
	int number;
	
	do
	{
		printf("%s [%d...%d]:", kata, min, max);
		scanf("%d", &number);
	}
	while(number < min || number > max);
	
	return number;
}

int myStrlen(char kata[]){
	int count = 0;
	
	while(kata[count] != '\0'){
		count++;
	}
	return count;
}

int main(){
	
	//int inputInt
	int nilai, uang;
	//inp nilai 1-100
	//inp uang 1000-10000
	
	inputInt("masukkan nilai", 0, 100); //nilai = 50
	uang = inputInt("masukkan uang", 1000, 10000); //uang = 7000
	
	printf("%d %d", nilai, uang);
	
//==============================================

	// void cetak
	int a = 10;
	cetak(a);
	printf("\nmain %d", a);
	
//===============================================

	//int myStrlen
	charkata[] = {"belajar"};
	int length = myStrlen(kata);
	printf("%d", length);
	
//================================================

	char kata[50] = {"belajar#makan#cabe"};
	char *temp;
	//int day, month, year;
	char day[10], month[10], year[10];
	// tanggal = 20-08-2019
	// tanggal = 20
	// bulan = 08
	// tahun = 2019
	
	scanf("%[^-]-%[^-]-%s", &day, &month, &year); 
	// yang belakang ga pake [^-] karena habis tahun ga ada -
	printf("%s %s %s", day, month, year);
	
	
	temp = strtok(kata,"#");
	printf("%s\n", temp);
	temp = strtok(NULL, "#");
	printf("%s\n", temp);
	temp = strtok(NULL, "#");
	printf("%s\n", temp);
	
	return 0;
}
