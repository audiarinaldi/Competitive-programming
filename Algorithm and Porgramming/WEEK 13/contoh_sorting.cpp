#include<Stdio.h>
#include<String.h>

//BUBBLE SORT
void bubblesort(int arr[], int n){
	int temp; //temporary gunanya buat nyimpen 
	for(int i = 0; i < n-1; i++){ //buat sorting dari belakang, makanya n-1
		for(int j = n -1; j > i; j--){  //karena cycle mundur makanya n-1 dan j--
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}

//SELECTION SORT
void selection(int arr[], int n){
	int temp;
	for(int i = 0; i < n-1; i++){
		minIdx = 1; //minimum index
		for(int j = i; j < n; j++){
			if(arr[minIdx] > arr[j])minIdx = j;
		}
		temp = arr[minIdx];
		arr[minIdx] = arr[i];
		arr[i] = temp;
	}
}

//SELECTION STRUCT DATA ARRAY
void selectionstruct(struct Data d[], int n){
	printf("Selection sort struct jalan\n");
	struct Data temp;
	int minIdx;
	for(int i = 0; i < n-1; i++){
		minIdx = 1; //minimum index
		for(int j = i; j < n; j++){
			if(strcmp(d[minIdx].nama, d[j].nama > 0)
				minIdx = j;
		}
		temp = d[minIdx];
		d[minIdx] = d[i];
		d[i] = temp;
	}
}

//BIKIN PRINT-AN NAMA NAMA
void selection(char kata[][50], int n){
	int temp;
	for(int i = 0; i < n-1; i++){
		minIdx = 1; //minimum index
		for(int j = i; j < n; j++){
			if(strcmp(kata[minIdx], kata[j] > 0)
				minIdx = j;
		}
		strcpy(tempkata, kata[minIdx]);
		strcpy(kata[minIdx], kata[i];);
		strcpy(kata[i], tempkata);
		temp = arr[minIdx];
		arr[minIdx] = arr[i];
		arr[i] = temp;
	}
}

int main(){
	char kata[][50]{"rudy", "budi", "rendy", "tono", "adri", "aski"}
	int arr[] = {5,1,4,2,3,9};
	int n = 6;
	Data d[10] = {
		{"rudy", 5},
		{"budi", 1},
		{"rendy", 4},
		{"tono", 2},
		{"adri", 3},
		{"aski", 9},
	};
	//ngeprint nama
	
	//ngeprint yang ga berurut
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	
	//print bubble sort
	bubblesort(arr, n);
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	
	//print selection
	selectionstruct(d, n)
	for(int i = 0; i < n; i++){
		printf("%s %d\n", kata[i].nama, );
	}
	
}
