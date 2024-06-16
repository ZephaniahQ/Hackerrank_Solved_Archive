#include<stdio.h>


int main (){
    int n, k;
    scanf("%d %d", &n, &k);
    int largest = 0;
    
    for(int i = 0;i<n;i++){
        int temp;
        scanf("%d", &temp);
        if(temp>largest){
            largest = temp;
        }
    }
    
    int ans = ((largest - k)>=0)? largest-k: 0;
    printf("%d", ans);
}