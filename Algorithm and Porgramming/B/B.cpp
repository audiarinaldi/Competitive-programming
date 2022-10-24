#include<Stdio.h>
#include<String.h>

int main(){
	
	int qty[101];
	char name[101][101];
	int tc;
	
	scanf("%d", &tc);
	getchar();
	
	for(int i = 0; i < tc; i++){
		scanf("%s %d", name[i], &qty[i]);
		getchar();
	}
	
	//SORTING
	//Bubble Sort
	for(int i = 0; i < size-1; i++){
		for(int j = 0; j < j-i-1; j++){
			//ascending
			if(qty[j] > qty[j+1]){
				//swap
				int _qty = qty[j];
				qty[j] = qty[j+1];
				qty[j+1] = _qty;
				
				char _name[101];
				strcpy(_name, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], _name);
			}
		}
	}
	//WRITE KE FILE
	FILE *fp;
	fp = fopen("B.txt", "w");
	for(int t = 0; t < size; t++){
		fprintf(fp, "%dx %s\n", qty[t], name[t]);
	}
	return 0;
}
