
#include <iostream>

using namespace std;


int main() {
    int n;
    cin>> n;
    
    int arr[n];
    
    for(int i{}; i<n; i++){
       scanf("%d", &arr[i]);
    }
    
    for(int i = n-1; i>=0; i-- ){
        cout << arr[i] << " ";
    }
    
    cout<< endl;
    return 0;
}
