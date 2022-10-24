#include<stdio.h>
#include<string.h>

// misalkan tc 14, buku 4 sisi, kalo cover depan ngadep muka, yang kiri 4 yang kanan 1.
// dan kalo dibuka, maka akan berurut 1,2,3,4.
// maka kalo ditotal dimodulus 4 maka habis, dan ada beberapa halaman yang yang tidak akan habis di modulo 4
// akan aeda yang habis dibagi dan tidak.

int main() {
    int n;
    scanf("%d", &n);
    int blank = n % 4;
    
    int depan, belakang, ctr = 0;
    for(int i=1; i<=n/4; i++) {
        ctr++;
        if(ctr == 1) {
            if(blank == 1) {
                printf("Sheet %d, depan: Blank, 1");
                printf("Sheet %d, belakang: Blank, Blank");
            }
            else if(blank == 2) {
                printf("Sheet %d, depan: Blank, 1");
                printf("Sheet %d, belakang: 2, Blank");
            }
            else if(blank == 3) {
                printf("Sheet %d, depan: Blank, 1");
                printf("Sheet %d, belakang: Blank, Blank");
            }
            else if(blank == 0) {
                printf("Sheet %d, depan: %d, 1", n);
                printf("Sheet %d, belakang: 2, %d", n-1);
            }
        }
        else {
            // maaf pak belum selesai  
        }
    }

    
    return 0;
}
