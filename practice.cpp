#include <iostream>
using namespace std;  

int main(){
    float cnt;
    int sum;
    double average;
    double p_scorehigh;

    int arr[1000];

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        
        sum = 0;
        cnt = 0;
        
        cin >> arr[0];

        for(int j =1; j<=arr[0]; j++){
            cin >> arr[j];
        }

        for(int j =1; j<=arr[0]; j++){
            sum += arr[j];
        }

        average = sum / arr[0];

        for(int j=1; j<=arr[0]; j++){

            if(arr[j] > average){
                cnt++;
            }
        }

        p_scorehigh = (cnt/arr[0])*100;

        cout<<fixed;
        cout.precision(3);
        cout<<p_scorehigh<<'%'<<'\n';
    
    }
    
    return 0;
}