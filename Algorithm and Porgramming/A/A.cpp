#include<Stdio.h>

int main(){
	FILE *fp = fopen("A.txt", "r");
	int tc = 0;
	
	fscanf(fp, "%d\n", &tc);
	for(int t = 0; t < tc; t++){
		printf("Case #%d: ", t+1);
		char character = '\0';
		while(character != '\n'){
			fscanf(fp, "%c", &character);
			if(character >= 'A' && character <= 'Z'){
				character = character - 'A' + 'a';
			}
			printf("%c", character);
		}
	}
	fclose(fp);
	printf("\n");
	return 0;
}
