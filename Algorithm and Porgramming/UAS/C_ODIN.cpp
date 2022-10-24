#include <stdio.h>
#include <string.h>

struct data{
    char id[5];
    char name[25];
    int num;
}d;

int main(){
    struct data d[55];
    FILE * fp;
    fp=fopen("testdata.in","r");
    int n,ctr=0,total=0;
    char key[5];
    fscanf(fp,"%d\n",&n);
    for(int i=0;i<n;i++){
        fscanf(fp,"%[^,],%[^,],%d\n",d[i].id,d[i].name,&d[i].num);  
    }
    fscanf(fp,"%s",key);    
    for(int i=0;i<n;i++){
        if(strcmp(key,d[i].id)==0){
            printf("%s %s %d\n",d[i].id,d[i].name,d[i].num);
            ctr++;
            total+=d[i].num;
        }
    }
    printf("Total Recipients: %d\n",ctr);
    printf("Total Amount: %d\n",total);
}
