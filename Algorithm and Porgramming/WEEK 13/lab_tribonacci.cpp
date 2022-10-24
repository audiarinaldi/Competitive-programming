#include<stdio.h>
#include<string.h>

int memo[100000];
int tribonacci(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(n == 2) return 1;
	if(memo[n] != -1) return memo[n];
	return tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
}

int main(){
	memset(memo, -1, 100000);
	int ans = tribonacci(4);
	printf("%d\n", ans);
	return 0;
}
