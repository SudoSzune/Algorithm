#include <iostream>
using namespace std;

int main(){

    int temp[101];
    int ans[101];

    int N,M;
    cin >> N >> M;
    int i,j,k;

    ans[0] = 0;
    temp[0] = 0;

    for(int t=1; t<=N; t++){
        ans[t] = t;
        temp[t] = t;  
    }

    for(int t = 1; t <= M; t++){
        cin >> i >> j >> k;
        
        for(int p = i; p<=j; p++){
            
            if(p<k){
                temp[p+(j-k)+1] = ans[p];
            }

            else{
                temp[p-(k-i)] = ans[p];
            }
        }

        for(int p =1; p<=N; p++){
            ans[p] = temp[p];
        }
    }

    for(int t = 1; t <N; t++ ){
        cout << ans[t] << " ";
    }
    cout << ans[N];
}