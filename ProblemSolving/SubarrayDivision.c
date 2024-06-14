#include<stdio.h>
#include<stdlib.h>

int FindSubArr(int size, int* arr, int d, int m){
    int subArrCount = 0;
    int sum = 0;
    if(size==1){
        if(m==1 && arr[0]==d){
            return 1;
        }
    }
    for(int i = 0; i<size-1;i++){
        int count = i;
        for(int j = 0;j<m;j++){
            sum += arr[count];
            count++;
        }
        if(sum==d) {
            subArrCount++;
        }
        sum = 0;
    }
    return subArrCount;
}

int main(){
    int n, d, m;
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &d, &m);
    int ans = FindSubArr(n, arr, d, m);
    printf("%d", ans);
    
}