#include <stdio.h>

//SOAL YANG STUDY GROUP
/*int main()
{
 char name1 [11], nim1 [11];
 char name2 [11], nim2 [11];
 char name3 [11], nim3 [11];
 
 scanf("%[^0-9]%[0-9]%[^0-9]%[0-9]%[^0-9]%[0-9]",
   name1, nim1, name2, nim2, name3, nim3);
 // berarti scan yang gk ada nomor sebagai nama1 dan yang ada nomor sebagai nim 1, buat dipisahin
 
 printf ("%-10s %-10s\n",name1,nim1);
 printf ("%-10s %-10s\n",name2,nim2);
 printf ("%-10s %-10s\n",name3,nim3);
 
 // %-10s --> itu nampung 10 huruf , supaya rapih \ (-/+) agar rata kiri (-) atau rata kanan (+)
 return 0;
}*/

//=============================================================

//SOAL BUDI'S HOUSE
int main(){
	char block;
	int far;
	
	scanf("%c %d",&block,&far);
	getchar();
	
	printf("%c\n",block+(far%26));
	
	
	return 0;
}
