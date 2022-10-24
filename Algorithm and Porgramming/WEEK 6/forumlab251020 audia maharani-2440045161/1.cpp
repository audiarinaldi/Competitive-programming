#include<stdio.h>

int main(){
int N, M[1001];
int sum = 0;
scanf("%d", &N);

for (int i=0; i < N; i++){
	scanf("%d", &M[i]);
}
	
for (int i=0; i < N; i++){
	sum = sum + M[i];
}

printf("%d", sum);
	return 0;
}

