#include<stdio.h>
#include<string.h>

struct Record{
	char acc[50];
	char name[20];
	int age;
	double balance;
}r;

int main(){
	struct Record r[5005];
	int n, m;
	char key[100];
	scanf("%d", &n);
	getchar();
	for(int i = 0 ; i < n; i++){
		scanf("%[^,],%[^,],%d,%f\n", r[i].acc, r[i].name, &r[i].age, &r[i].balance);
	}
	scanf("%d", &m);
	getchar();
	for(int i = 0; i < m; i++){
		scanf("%s", key);
		getchar();
		for(int i = 0; i < n; i++){
			if(strcmp(key, r[i].acc) == 0){
				printf("%s %d %.2f\n", r[i].name, r[i].age, r[i].balance); // pak bagian ini ga ngeprint.
				break;
			}
			if(i == n-1 && (strcmp(r[i].acc,key) != 0)){
				printf("-1\n");
			}
		}
	}
}
