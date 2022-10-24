#include<stdio.h>
#include<string.h>

struct Data{
	char type[10];
	char nama[20];
	int price;
};

int main(){
	struct Data d[100];
	FILE *fp;
	fp = fopen("testdata.in", "r");
	int n, count = 0, rec = 0; 
	char key[10];
	fscanf(fp, "%d\n", &n);
	for(int i = 0; i < n; i++){
		fscanf(fp, "%[^,],%[^,],%d\n", d[i].type, d[i].nama, &d[i].price);
	}
	fscanf(fp,"%s", &key); 
	for(int i = 0; i < n; i++){
		if(strcmp(key,d[i].type) == 0){
			printf("%s %s %d\n", d[i].type, d[i].nama, d[i].price);
			count++;
			rec += d[i].price;
		}
	}
	printf("Total Recipients: %d\n", count);
	printf("Total Amount: %d\n", rec);
}
