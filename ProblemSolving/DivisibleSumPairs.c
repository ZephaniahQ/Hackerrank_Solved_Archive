//I have some understanding of the inner-outer loop working out but need more analysis

#include<stdio.h>
#include<stdlib.h>

int FindSubArr(int size, int* arr, int k){
    int pairCount = 0;
    for(int i=0;i<size;i++){
        for(int j = i+1; j<size; j++){
            if((arr[i]+arr[j])%k==0){
                pairCount++;
            }
        }
    }
    return pairCount;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int* arr = (int*)malloc(n*sizeof(int));
    
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int ans = FindSubArr(n, arr, k);
    printf("%d", ans);
    
}