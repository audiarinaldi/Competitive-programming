#include<Stdio.h>
#include<string.h>

void sort(int n, int rank[], string nama[][255]){
	char count[255];
	int place;
	//rank place
	for(int i = 1; i < n-2; i++){
		for(int j = 1; j < n - i - 2; j++){
			if(rank[j] > rank[j+1]){
			place = rank[j];
			rank[j] = rank[j+1];
			rank[j+1] = place;
			}
		}
	}
	//strcpy
	for(int i = 1; i < n-2; i++){
		for(int j = 1; j < n - i - 2; j++){
			strcpy(count, nama[j]);
			strcpy(nama[j+1], count);
			strcpy(nama[j], nama[j+1]);
		}
	}
}
int main(){
	int n;
	int rank[n];
	string nama[n][255];
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &rank[i]);
		getchar();
		scanf("%s", nama[i]);
		getchar();
	}
	for(int j = 0; j < n; j++){
		printf("%d => %s\n", rank[j], nama[j]);
	}
}
