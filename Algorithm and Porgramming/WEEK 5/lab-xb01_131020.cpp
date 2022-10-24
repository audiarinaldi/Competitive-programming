#include<stdio.h>

int main(){
	
//	//ARRAY & POINTER
//	// -POINTER
//	// -ARRAY
//	// -STRING MANIPULATION
//	
//	//POINTER
//	// variable yang berisi alamat dari variabel lain
//		// -> int a =2
//		// -> *a = &a
//		
//		//tipe data harus sama
//		int number = 2;
//		int *pNumber = &number; // deklarasi + inisialisasi
//		pNumber = &number; // inisialisasi
//		char a = a;
//		char *pA; //deklarasi pointer
//		
//		printf("Value number: %d\n", number);
//		printf("Alamat number: %d\n", &number);
//		printf("Value pNumber: %d\n", pNumber);
//		printf("Value yang di reference pNumber: %d\n", *pNumber);
//		
//		*pNumber = 10;
//		printf("Value number: %d\n", number);
//		printf("Alamat number: %d\n", &number);
//		printf("Value pNumber: %d\n", pNumber);
//		printf("Value yang di reference pNumber: %d\n", *pNumber);
//		
	//ARRAY	
	// -> string ( tapi di c ga ada)
	// -> char name[100]
	// -> struktur data yang dapat menyimpan beberapa item (value) dengan tipe data yang sama
	// -> int a = 2;
	// -> int a[2] = {2,4} -----> satu dimensi
	// -> bisa buat array dengan banyak dimensi
	// -> int array [5][3] -----> array 2 dimensi
	// -> int array [5][3] dimana [5] adalah baris (kebawah) [3] adalah kolom (kesamping)
	
	//STRING MANIPULATION
	// strcpy
	// strlen
	// strcmp
	//strcmpi
	
	
	int array[5] = (11, 12, 13, 14, 15);
	
	//inisialiasi  array isinya 0 semua
	int array0[5] = {0}; //kalo isinya {0} bakal keisi 0 semua, kalo >1 nanti cuma kotak pertama yang angka itu
		
	
	for(int i = 0; i < 5; i++){
		printf("Array[%d] = %d", i, array[i]);
	}
	
//	int array2D[5][3]; // 5 baris (kebawah), 3 kolom (kesamping)
	char nama[3][10]; // 3 kebawah, 10 kesamping
	
	int array2D[5][4] = {}
		(1,2,3),
		(4,5,6),
		(7,8,9),
		(10,11,12),
		(13,14,15),
		
		//looping buat baris
		for(int i = 0; i < 5; i++){
			//looping buat kolom
			for(int j = 0; j < 5; j++){
				printf("array2D[%d][%d] = [%d]", i, j, array2D[i][j]);
			}
		}
		
		//kalo scanf biar masukin nilai
		int arr[3][3];
		for(int i = 0; i < 3; i++){
			for(int j = 0: j < 3; j++){
				scanf("%d", &arr[i][j]);
			}
		}
		
		//kalo scannya array of char
		char name[30];
		scanf("%s", name);
		
		int array[number];
		
		
	return 0;
}

//======================================================================

SOAL 1
#include <stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	getchar();
	
	int array[size];
	for(int i = 0; i < 5; i++){
		scanf("%d", &array[i]);
		char name[30];
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < size; i++){
		printf("Angka ke-%d: %d\n", i, array[i]);
	}
	return 0;
}

//=================================================================

//SOAL 2
#include <stdio.h>

int main(){
	
	char stc[101];
	char karakter;
	//array of char
	//"Shania" -> 's' , 'h', 'a' , 'n' , 'i', 'a', '\0'
	scanf("%s %c", stc, &karakter);
	getchar();
	
	//cara tanpa string.h <- library
	for(int i = 0; stc[i] != '\0'; i++) { // i < stc
	if(stc[i] == karakter) 
	printf("%c", stc[i]);
	}
	
	
	return 0;
}
