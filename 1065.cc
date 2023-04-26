#include <iostream>
#include <string.h>
using namespace std;

int hansu(int N) {

    int temp1, temp2, temp3;
    int cnt = 0;

    for (int i = 1; i <= N; i++) {

        temp1 = i / 100;

        temp2 = (i % 100) / 10;

        temp3 = (i % 10);


        if (i < 100) {
            cnt++;
        }
        else {
            if ((temp2 - temp1) == (temp3 - temp2)) {
                cnt++;
            }
        }

    }
    return cnt;
}

int main(){

    int number;
    cin >> number;
    int c = hansu(number);
    cout << c;
    
    
    return 0;

}
