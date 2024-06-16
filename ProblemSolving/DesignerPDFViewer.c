#include<stdio.h>
#include<string.h>


int main(){
    int hightArr[26];
    char wordStr[10] = {0};
    
    for(int i = 0; i < 26; i++){
        scanf("%d", &hightArr[i]);
    }

    scanf("%s", wordStr);
    int tallest = 0;
    
    for(int i = 0; i<strlen(wordStr); i++){
       if(hightArr[wordStr[i]-97]>tallest){
           tallest = hightArr[wordStr[i]-97];
       }
    }
    printf("%d", tallest*(int)strlen(wordStr));
}