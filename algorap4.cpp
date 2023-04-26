#include <iostream>
using namespace std;

int main(){
    int t, n; // 테스트케이스의 개수와 가위바위보 하는 사람 수
    cin >> t;
    int x; // 숫자 입력받을 변수
    int a,b,c; //각각 가위, 바위, 보

    for(int i=0; i<t; i++){
        cin >> n;
        a = 0;
        b = 0;
        c = 0;
        for(int j=0; j<n; j++){
            cin >> x;
            if(x==1){
                a++;
            }
            if(x==2){
                b++;
            }
            if(x==3){
                c++;
            }
        }
        if( (a == 0 && b==0) || (b ==0 && c ==0) || (a ==0 && c ==0) || (a > 0 && b > 0 && c >0)){
            cout << 0 << '\n';
        }
        else if(a>0 && b>0){
            cout << b << '\n';
        }
        else if(b>0 && c>0){
            cout << c << '\n';
        }
        else if(a>0 && c>0){
            cout << a << '\n';
        }
    }
}