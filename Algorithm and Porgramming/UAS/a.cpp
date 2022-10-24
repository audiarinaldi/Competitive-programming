#include<stdio.h>
 //PAK MAAF SAYA BELUM SELESAI TAPI SAYA NGERTI MAKSUD CODENYA NGUBAH KE
 // CM DULU, DI SORT BASE ON TINGGI, BARU NAMA.
struct Data{
	int id;
	char nama[255];
	int foot;
	int inch;
}d;

float count(int a, int b){
	float cm;
	cm = ((a*12*2.54)+(b*2.54));
	return cm;
}

void swap(int *c, int *d){ 
    int temp = *c; 
    *c = *d; 
    *yd = temp; 
}

void mergeSort(int l,int r){
    int mid = (l+r)/2;
    if(l != r){
        mergeSort(l,mid);
        mergeSort(mid+1,r);
    }
    int temp = l, j = mid+1, k = 0;
    
    while(i <= mid && j <= r){
        if(arr[i]<arr[j]){
            arrb[k++] = arr[i++];
        } else {
            arrb[k++] = arr[j++];
        }
    }
    while(i <= mid){
        arrb[k++] = arr[i++];
    }
    while(j <= r){
        arrb[k++] = arr[j++];
    }
    for(int l = 0; l < k; l++){
        arr[l+l] = arrb[l];
    }
    return;
}

int main(){
	struct Data d[5005];
	int n, m;
	int idx = 0;
	int am[105];
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%[^,],%[^,],%d %d", &d[i].id, d[i].nama, &d[i].foot, &d[i].inch);
	}
	scanf("%d", &m);
	
	for(int j = 0; j <= m; j++){
		int arr[100];
    scanf("%d",&m);
    for(int j=1;j<=m;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(int j = 1; j<=m; j++)
    {
        printf("Q%d:\n",j);
        for(int i = 1;i<=n;i++)
        {
            float cm ;
            cm = count(d[i].foot,d[i].inch);
            mergeSort(0, n-1);
            if (cm < arr[j])
            {
                printf("%d %s %.2f\n",d[i].id, d[i].nm, cm);
            }else{
                printf("-1\n");
                break;
            }
        }
    }
}
	
	
	return 0;
}
