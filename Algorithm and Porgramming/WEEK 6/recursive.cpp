#include<stdio.h>


int recur(int i,int x){
    if(i<x){
        printf("%d",i);
        i+=1;
        return recur(i,x);
    }
    else if(i==x){
        return 0;
    }
}

void iterasi(int x){
    
    for(int i=0;i<x;i++){
        printf("%d",i);
    }    
}


int main(){
    int inp;
    scanf("%d",&inp);
    printf("Iterasi : ");
    iterasi(inp);
    printf("\n");
    printf("Recursive : ");
    recur(0,inp);
    printf("\n");
    
    
    return 0;
}
