#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int zero_cnt, one_cnt, n;
        zero_cnt = 0;
        one_cnt = 0;
        cin >> n;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                zero_cnt++;
            }
            else
            {
                one_cnt++;
            }
            n = n / 2;
        }
        one_cnt++;
        cout << zero_cnt << ' ' << one_cnt << '\n';
    }
}