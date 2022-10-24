#include<stdio.h>

int main(){
	//Read file .txt
	FILE *fp;
	fp = fopen("file.txt", "r");
	
	//READ => Name#Age
	char name[20];
	int age;
	fscanf(fp, "%[^#]#%d\n", name, &age);
	printf("%s -> %d\n", name, age);
	
	//KALO looping biar kebaca terus
	while(feof(fp) == false){
		fscanf(fp, "%[^#]#%d\n", name, &age);
		printf("%s -> %d\n", name, age);
	}
	
	fclose(fp);
	
	return 0;
}
