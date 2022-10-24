#include<stdio.h>
#include<string.h>

int main(){
	char word[260];
	gets(word);
	printf("%s\n", strrev(word));
	
	return 0;
}
