#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k, sum=0;
    int split, i = 0;
    scanf("%d %d", &n, &k);
    
    
    for(i = 0;i<n;i++){
        int temp;
        scanf("%d", &temp);
        if(i==k){
            continue;
        }else{
            sum+=temp;
        }
    }
    
    scanf("%d", &split);
    if(split==sum/2){
        printf("Bon Appetit");
    }else{
        printf("%d", split-sum/2);
    }
}