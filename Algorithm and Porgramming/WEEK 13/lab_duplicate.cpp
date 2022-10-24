#include<stdio.h>

int findDuplicate(int arr[], int n){
	for(int i = 0; i < n; i++){
		int curr = arr[i];
		
		for(int j = i+1; j < n; j++){
			int next = arr[j];
			
			if(curr == next) return curr;
		}
	}
}

int main(){
	int nums[] = {1, 1, 2};
	int n = 3;
	int ans = findDuplicate(nums, n);
	printf("%d\n", ans);
	
	return 0;
}
