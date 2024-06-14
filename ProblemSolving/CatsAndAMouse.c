#include<stdio.h>
#include<stdlib.h>

int getDistance(int start, int goal){
    if(start>goal){
        int temp = start;
        start = goal;
        goal = temp;
    }
    int count;
    for(int i = start;i<goal;i++){
        count++;
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        int catA,catB,mouseC;
        scanf("%d %d %d", &catA, &catB, &mouseC);
        
        int distCatA = getDistance(catA, mouseC);
        int distCatB = getDistance(catB, mouseC);
        
        if(distCatA<distCatB){
            printf("Cat A\n");
        }else if(distCatB<distCatA){
            printf("Cat B\n");
        }else {
            printf("Mouse C\n");
        }
    }
}