#include<stdio.h>
#include<math.h>

//beautifull solution I am proud of this one;

int getSec(int n){
    int lastSec = n - n%2;
    int Secs = 0;
    for(int i = 0;i<=lastSec;i+=2){
        Secs++;
    }
    return Secs;
}

int main(){
    int n, p;
    scanf("%d %d", &n, &p);
    
    int totSecs = getSec(n);
    int reqSec = getSec(p);

    if(reqSec>ceil(totSecs/2)){
        printf("%d", totSecs-reqSec);
    }else{
        printf("%d",reqSec-1);
    }
}