#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    int n, max, min;
    int arr[t];
    
    for(int i =0; i< t; i++){
        cin >> n;
        for(int j =0; j<1; j++){
            cin >> arr[j];
            max = arr[j];
            min = arr[j];
        }
        for(int j =1; j<n; j++){
            cin >> arr[j];
            if(arr[j] > max){
                max = arr[j];
            }
            if(arr[j] < min){
                min = arr[j];
            }
        }

        cout << max << ' '<< min << '\n';
    }

}