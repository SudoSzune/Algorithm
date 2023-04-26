#include <iostream>
using namespace std;

int main() 
{

    int N;
    cin >> N;
    int new_N = N;
    
 
    int count = 0;
    int A, B;
    A = 0;
    B = 0;
    do{

        A = new_N / 10;
        B = new_N % 10;
       
        
        new_N = 10 * B + ((A + B) % 10);

        count++;

    } while (new_N != N);
    
     cout << count;

    return 0;

}