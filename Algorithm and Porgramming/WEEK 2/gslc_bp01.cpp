#include<stdio.h>

int main(){
	int a, b, c, d, e;
	int product, sum;
	float average;
	
	scanf("%d %d %d %d %d" , &a, &b, &c, &d, &e);
	getchar();
	
	
	product = a * b * c * d * e;
	sum = a + b + c + d + e;
	average = sum/5.0;
	
	printf("Product		: %d\n" , product);
	printf("Sum		: %d\n" , sum);
	printf("Average		: %.2f\n" , average);
	
	return 0;
}
