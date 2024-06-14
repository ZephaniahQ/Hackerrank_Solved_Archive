#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int*scoreArr = (int*)malloc(n*sizeof(int));
    int highest = 0, lowest = 0;
    int highesCount = 0, lowestCount = 0;
    
    for(int i = 0; i<n ; i++){
        scanf("%d", &scoreArr[i]);
    }
        highest = scoreArr[0];
        lowest = scoreArr[0];
    
    for(int i = 1; i<n; i++){
        if(scoreArr[i]<lowest){
            lowest = scoreArr[i];
            lowestCount++;    
        }else if(scoreArr[i]>highest){
            highest = scoreArr[i];
            highesCount++;         
        }
    }
    printf("%d %d", highesCount, lowestCount);
}