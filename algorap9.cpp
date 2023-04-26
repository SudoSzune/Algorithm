#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    int n;
    int temp;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int acnt = 0;
        int bcnt = 0;
        int ccnt = 0;
        int dcnt = 0;
        int fcnt = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (temp <= 100 && temp >= 90)
            {
                acnt++;
            }
            else if (temp < 90 && temp >= 80)
            {
                bcnt++;
            }
            else if (temp < 80 && temp >= 70)
            {
                ccnt++;
            }
            else if (temp < 70 && temp >= 60)
            {
                dcnt++;
            }
            else
            {
                fcnt++;
            }
        }
        cout << acnt << ' ' << bcnt << ' ' << ccnt << ' ' << dcnt << ' ' << fcnt << '\n';
    }
}