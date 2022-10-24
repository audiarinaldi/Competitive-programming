#include<stdio.h>

int main(){
	int radius;
	double volume;
	
	scanf("%d" , &radius);
	getchar();
	
	//volume bola
	volume =  (4.0/3)* 3.14 * radius * radius * radius;
	
	printf("%lf" , volume);
	
	return 0;
}
