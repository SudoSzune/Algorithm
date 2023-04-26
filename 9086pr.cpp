#include <iostream>
#include <cstring>
using namespace std;


int main(){

    char arr[1000];
    int T;
    cin >> T;

    for(int i=0; i < T; i++){
        cin >> arr;
        int last_n = strlen(arr);
        cout << arr[0] << arr[(last_n)-1] <<'\n';
    }

    return 0;
}