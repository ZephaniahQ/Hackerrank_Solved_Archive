#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    
    if(a>b){
      if(c>d){
          return (a>c)? a : c;
      }else{
          return (a>d)? a : d;
      }
    }else {
        if(c>d){
            return (b>c)? b : c;
        }else{
            return (b>d)? b : d;
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}