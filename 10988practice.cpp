#include <iostream>
using namespace std;
#include <string>

int main(){

    string a;
    cin >> a;

    for(int i = 0; i < a.length(); i++){
        if (a[i] != a[a.length() - i - 1]) {
			cout << "0" << '\n';
            break;
		}
        else if(i == a.length() -1 && a[i] == a[a.length() -i -1]){
            cout << "1" << '\n';
        }
    }
    return 0;

}