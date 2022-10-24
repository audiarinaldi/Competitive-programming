#include<stdio.h>

int main()
{
/*
	printf("Hallo\n");
	// kalo mau print  " " di text caranya
	// mau print "apa kabar?"
	 printf("\"Apa Kabar?\"\n");
	 //itu ditambah \ biar kebaca " setelahnya
	 
	 
	//==========================================
	//kalo mau print 50%
	printf("50%%"); //karena % sendiri punya makna jadi ga dibaca % makanya harus dua kali
	
	//========================================
	int angka =80;
	printf("nilai angka adalah: %d cm" , angka);
	
	//=========================================
	int belanja;
	int ppn;
	//kalo pake float
	//float belanja; //float
	//float ppn; //float
	
	prinf("Masukkan total belanja: ");
	scanf("%d", &belanja);
	
	ppn= belanja * 10/100;
	ppn = 0.1 *belanja //float
	
	printf("Belanja	: %d\n" , belanja);
	printf("PPN		: %d\n" , ppn);
	printf("------------------- +\n");
	printf("Total	: %d\n", (belanja+ppn));
	printf("Total	: %.2f\n", (belanja+ppn)); //float
	*/
	#include <stdio.h>


 
 int belanja, ppn;
 printf("Harga belanja: ");
 scanf("%d",&belanja);
 
 ppn = 1.2 * belanja;
 printf("Harga belanja: %d\n",belanja);
 printf("PPN: %d\n",ppn);
 printf("Total: %d",(belanja+ppn));

 
	return 0;
	
}
