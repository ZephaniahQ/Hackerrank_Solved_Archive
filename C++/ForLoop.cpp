#include <iostream>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int i = a;i<=b;i++){
        if(i>9){
            (i%2==0)? printf("even\n") : printf("odd\n");
        }else{
            (i==0)? printf("zero\n") : (i==1)? printf("one\n") :
            (i==2)? printf("two\n")  : (i==3)? printf("three\n") :
            (i==4)? printf("four\n") : (i==5)? printf("five\n") :
            (i==6)? printf("six\n")  : (i==7)? printf("seven\n") :
            (i==8)? printf("eight\n") : (i==9)? printf("nine\n") : printf("");
        }
        //tried chaining ternary operators just to try it out, it works!
    }
    return 0;
}
