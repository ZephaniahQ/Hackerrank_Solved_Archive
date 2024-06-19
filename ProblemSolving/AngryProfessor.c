#include<stdio.h>



int main(){
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i<t; i++){
        
        int n, k;
        scanf("%d %d", &n, &k);
        int attendees = 0;
        
        for(int j = 0; j<n; j++){
            int temp;
            scanf("%d", &temp);
            if(temp<=0){
                attendees++;
            }
        }
        
        if(attendees>=k){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}
