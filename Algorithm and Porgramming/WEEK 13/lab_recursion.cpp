#include<stdio.h>
#include<string.h>

int r(int n){
	if(n < 10) return n;
	int sum = 0;
	while(n > 0){
		int digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}
	return r(sum);
}
int superDigit(char n[], int k){
	int len = strlen(n);
	int sum = 0;
	int i;
	for(i = 0; i < len; i++){
		int digit = n[i] - '0';
		sum = sum + digit;
	}
	return sum * k;
}

int main(){
	char n[] = "123";
	int k = 3;
	
	int ans = superDigit(n, k);
	printf("%d\n", ans);
	
	return 0;
}
