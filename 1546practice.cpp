#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int a[1000];
    
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int max = 0;
    double sum = 0;

    for (int j = 0; j < N; j++) {
        if (a[j] > max) {
            max = a[j];
        }
        sum += a[j];

    }


    cout << ((sum/N) / max) * 100;

}