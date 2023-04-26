#include <iostream>
using namespace std;

int main(){

    const int arrsize = 1000001;
    char S[arrsize]; 

    int cnt,fcnt; //각각 공백이 나온 횟수, 알파벳이 나온 횟수를 저장할 변수

    cnt = 0;
    
    cin.getline(S,arrsize);

    if(S[0] != ' '){
        cnt++;
    }

    for(int i = 0; S[i] != '\0'; i++){
        if(S[i-1] == ' ' && S[i] != ' '){
            cnt++;
        }
    }

    cout << cnt;
}