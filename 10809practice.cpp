#include <iostream>
using namespace std;

int arr[26];
int main(){
    char S[101] ={};
    
    cin >> S;

    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < 26; i++){
        arr[i] = -1; //답을 출력할 arr에 초기값을 -1로 설정해둔다
    }
    for(int j = 0; j< 26; j++){
        for(int i = 0; S[i] != '\0'; i++){
            if(S[i] == alphabet[j]){
                arr[j] = i;
                break;            
            }
        }
    }
    
    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
    return 0;
    
}