#include<stdio.h>


int main(){
	
	int N;
	scanf("%d", N);
	
	if(int i = 0; i < N; i++){
		if(N % 3 == 0 && N % 5 == 0){
			printf("FizzBuzz");
		} else if (N % 3 == 0 ){
			printf("Fizz");
		} else if (N % 5 == 0 ){
			printf("Buzz");
		} else {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
