#include<stdio.h>
#include<stdlib.h>

int findLargest(int*arr, int size){
    int largest = arr[0];
    for(int i = 1; i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int*createCountArr(int largest){
    return (int*)calloc(largest+1,sizeof(int));
}

void birdCount(int*birdArr, int size){
    int countArrSize = findLargest(birdArr, size+1);
    int*countArr = createCountArr(countArrSize);
    for(int i = 0; i<size; i++){
        countArr[birdArr[i]]++;
    }
    
    int largestCount =findLargest(countArr, countArrSize);
    for(int i = 0; i<countArrSize;i++){
        if (countArr[i]== largestCount){
            printf("%d", i);
            return;
        }
    }
    
}


int main(){
    int n;
    scanf("%d", &n);
    if(n>200000){
        printf("0");
        return 0;
    }
    int*birdArr = (int*)malloc(n*sizeof(int));
    
    int*arr = (int*)malloc(n*sizeof(int));
    
    for(int i = 0; i<n; i++){
        scanf("%d", &birdArr[i]);
    }
    birdCount(birdArr, n);
}

/*
    Fails at test case 2 
*/