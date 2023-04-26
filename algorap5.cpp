#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int p = 0; p < t; p++)
    {
        int k;
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            for (int i = 1; i <= k; i++)
            {
                if (i == ((k / 2) + 1) && j != (k / 2) + 1)
                {
                    cout << 'I';
                }
                else if ((i + j == (k + 1)) && j != (k / 2) + 1)
                {
                    cout << '*';
                }
                else if (i == (k / 2) + 1 && j == (k / 2) + 1)
                {
                    cout << 'O';
                }
                else if (j == (k / 2) + 1 && i != (k / 2) + 1)
                {
                    cout << '+';
                }
                else
                {
                    cout << '.';
                }
            }
            cout << '\n';
        }
    }
}