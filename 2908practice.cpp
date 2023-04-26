#include <iostream>
using namespace std;

int main(){

    int A, B;
    cin >> A >> B;
    int re_A, re_B;

    re_A = ((A % 10) * 100) + (((A % 100)/10) * 10) + (A / 100);
    re_B = ((B % 10) * 100) + (((B % 100)/10) * 10) + (B / 100);

    if(re_A > re_B){
        cout << re_A;
    }
    else{
        cout << re_B;
    }

    return 0;

}