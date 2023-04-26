#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int N, temp, ans;

    for(int i = 0; i < t; i++){
        cin >> N;
        ans = 1;
        for(int j = 0; j<N; j++){
            cin >> temp;
            ans = (ans*(temp%10)) % 10;
        }
        cout << ans << '\n';
    }

}