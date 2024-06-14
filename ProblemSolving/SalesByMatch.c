#include<stdio.h>
#include<stdlib.h>

int findLargest(int*arr, int size){
    int largest = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    scanf("%d", &n);
    
    //input
    int*arr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    //making a counting array
    int largest = findLargest(arr, n);
    int countArrSize = largest + 1;
    int*countArr = (int*)calloc(countArrSize,sizeof(int));  
    
    //counting repetition of each element
    for(int i = 0; i<n; i++){
        countArr[arr[i]]++;
    }
    
    //counting pairs in count arr(size of count arr is int "largest")
    int pairs = 0;
    for(int i = 0;i<countArrSize;i++){
        pairs += countArr[i]/2;
    }
    
    printf("%d", pairs);
     
}