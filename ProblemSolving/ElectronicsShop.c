#include<stdio.h>
#include<stdlib.h>

int main(){
    int budget,nKeyboard,nMouse;
    scanf("%d %d %d", &budget, &nKeyboard, &nMouse);
    
    int*Keyboards = (int*)malloc(nKeyboard*sizeof(int));
    int*Mouse = (int*)malloc(nMouse*sizeof(int));
    
    for(int i =0;i<nKeyboard;i++){
        scanf("%d", &Keyboards[i]);
    }
    
    for(int i =0;i<nMouse;i++){
        scanf("%d", &Mouse[i]);
    }
    
    int mostExpensive = -1;
    
    for(int i = 0;i<nKeyboard;i++){
        for(int j = 0; j<nMouse;j++){
            int combo = Keyboards[i]+Mouse[j];
            if ((combo>mostExpensive)&&(combo<=budget)){
                mostExpensive = combo;
            }
        }
    }
    printf("%d", mostExpensive);
}