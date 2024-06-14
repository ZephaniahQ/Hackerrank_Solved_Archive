#include<stdio.h>
#include<stdlib.h>

/*
    proud of this one too.
    Logic:
        - take input and store U and Ds in a char arr
        - init a level var to 0
        - if the level was 0 just do level++ or -- according to U or D
        - if it was not 0 which means we are either on a mountain or a valley
            by that logic: 
                check if step is up and:
                    if by going up level is now 0
                        this means we were in a valley and now came back
                        so valleyCount++;
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int steps;
    scanf("%d", &steps);
    char*stepsArr = (char*)calloc(steps,sizeof(char));
    int valleyCount = 0;
    
    for(int i = 0; i<steps; i++){
        scanf(" %c", &stepsArr[i]);    
    }
    
    int level = 0;
    for(int i = 0; i<steps; i++){    
        if(level==0){
            if(stepsArr[i] == 'U'){
                level++;
            }else {
                level --;
            }
        }else{
            if(stepsArr[i] == 'U'){
                level++;
                if(level==0){
                    valleyCount++;
                }
            }else {
                level --;
            }
        }
    }
    
    printf("%d", valleyCount);
    
}
        