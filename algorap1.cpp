#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    int n, sum, temp;
    int arr[t];
    
    for(int i =0; i< t; i++){
        cin >> n;
        sum = 0;
        for(int j =0; j<n; j++){
            cin >> temp;
            sum += temp;
        }
        arr[i] = sum;
    }

    for(int i=0; i<t-1; i++){
        cout << arr[i] << '\n';
    }
    cout << arr[t-1];
}