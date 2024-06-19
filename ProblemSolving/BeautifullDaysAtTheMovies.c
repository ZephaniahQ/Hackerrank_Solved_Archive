#include<stdio.h>

int reverse(int n){
    int reverse = 0;
    int remainder;
    while(n!=0){
        remainder = n%10;
        reverse = reverse * 10 + remainder;
        n/=10;
    }

    return reverse;
}

int isNotFractional(float floatNum){
    int intNum = (int)floatNum;
    return (intNum == floatNum)? 1 : 0;
}

int main(){
    int start,end,k;
    
    scanf("%d %d %d", &start, &end, &k );
    
    int beautifullNumCount = 0;
    
    for(int i = start; i<=end; i++){
        double checkNum = (float)((i-reverse(i))/(float)k);
        if(isNotFractional(checkNum)){
            beautifullNumCount++;
        }
        
    }
    
    printf("%d", beautifullNumCount);
}