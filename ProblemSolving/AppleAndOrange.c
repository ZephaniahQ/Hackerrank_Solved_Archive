#include<stdio.h>
#include<stdlib.h>

int main(){
    int s,t,a,b,m,n;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    
    int*appleDist = (int*)calloc(m,sizeof(int));
    int*orangeDist = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i<m;i++){
        scanf("%d", & appleDist[i]);
    }
    for(int i = 0; i<n;i++){
        scanf("%d", & orangeDist[i]);
    }
    
    int applesFallingInHouse = 0;
    for(int i = 0;i<m;i++){
        if(appleDist[i]>=0){
            // printf("found +ve apple\n");
            if( a+appleDist[i] >=s && a+appleDist[i] <=t){
                // printf("%d apple fell\n", appleDist[i]);
                applesFallingInHouse++;
            }
        }
        
    }
    
    int orrangesFallingInHouse = 0;
    for(int i = 0;i<n;i++){
        if (orangeDist[i]<=0){
            // printf("found -ve orange\n");
            if(b+orangeDist[i] >=s && b+orangeDist[i] <=t){
                // printf("%d orange fell\n", orangeDist[i]);
                orrangesFallingInHouse++;
            }
        }
        
    }
    
    printf("%d\n%d", applesFallingInHouse, orrangesFallingInHouse);    
    
}
