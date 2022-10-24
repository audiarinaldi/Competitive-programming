#include<stdio.h>

int main(){
	// 1) buat pointer yang akan nunjuk ke file kita
	FILE *fp;
	
	// 2) kalau mau pakai -> open file
	fp = fopen("file.txt", "r"); // ini cuma bisa buat read aja
	
	//WRITE -> print tapi printnya di file
	// name#age
	fprintf(fp, "Tintin#19\n");
	fprintf(fp, "Lele#20\n");
	fprintf(fp, "Jojo#21\n");
	fprintf(fp, "Dodo#18\n");
	getchar();
	
	// 3) 
	return 0;
}
