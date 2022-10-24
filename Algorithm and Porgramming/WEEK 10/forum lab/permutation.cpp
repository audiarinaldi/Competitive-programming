#include<stdio.h>
#include<stdlib.h>

int main(){
	long long n, counter;
	scanf("%d", &n);
	char satu[n], dua[n];
	scanf("%s %s", &satu, &dua);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(satu[i] == dua[j]);
			counter++;
		}
	}
	if(count == n){printf ("YES\n")};
	else{printf("NO\n")};
}
