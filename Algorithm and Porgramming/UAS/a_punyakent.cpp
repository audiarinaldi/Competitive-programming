#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct database{
    char id[4];
    char name[21];
    int num;
};
int main(){
    FILE *file;
    file=fopen("testdata.in","r");
    int a,counter=0,total=0;
    char key[4];
    fscanf(file,"%d\n", &a);
    struct database data[60];
    for(int i=0;i<a;i++){
        fscanf(file,"%[^,],%[^,],%d\n",data[i].id,data[i].name,&data[i].num);  
    }
    fscanf(file,"%s",key);    
    for(int i=0;i<a;i++){
        if(strcmp(key,data[i].id)==0){
            printf("%s %s %d\n",data[i].id,data[i].name,data[i].num);
            counter++;
            total+=data[i].num;
        }
    }
    printf("Total Recipients: %d\n",counter);
    printf("Total Amount: %d\n",total);
    return 0;
}
