#include <iostream>
using namespace std;


int main() {
    int n,q;
    
    cin >> n >> q;
    int**arr = new int*[n];
        
    for(int i = 0; i < n; i++)
    {
        
        int k;
        cin >> k;
        
        int*subArr = new int[k];
        
        for(int i = 0; i<k ; i++)
        {
            cin >> subArr[i];
        }
        
        arr[i] = subArr;
    }
    
    for(int it = 0; it < q; it++ )
    {
        int i,j;
        cin >> i >> j;
        
        
        cout << arr[i][j] << endl;
    }
    return 0;
}