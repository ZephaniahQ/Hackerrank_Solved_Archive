#include<stdio.h>

int getHeight(int cycles){
    int height = 1;
    for(int i=0;i<cycles;i++){
        if(i%2==0){
            height*=2;
        }else{height++;}
    }
    return height;
}


int main(){
    int t;
    scanf("%d", &t);
    
    for(int i=0;i<t;i++){
        int cycles;
        scanf("%d", &cycles);  
        printf("%d\n", getHeight(cycles));
    }
}