#include<stdio.h>
#include<stdio.h>

// struct mahasiswa{
    //char nim[11], nama[50];
    //int nilai;
    //char a;
// }

union mahasiswa{
    int nilai;
    char a;
}

void init(struct mahasiswa mhs){
	mhs.nilai = 98;
	strcpy(mhs.nama, "default");
	printf("function init: %s %d\n",mhs.nama, mhs.nilai);
}

int main(){
    union mahasiswa mhs;
    mhs.nilai = 258;
	//mhs.a = 'A';
    //printf("%c %d", mhs.a, mhs.nilai);

    // scanf("%s %s %d", mhs.nim, mhs.nama, &mhs.nilai);
    // printf("%s %s %d", mhs.nim, mhs.nama, mhs.nilai);
}
