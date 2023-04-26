#include <iostream>
using namespace std;

int main()
{

    int t;
    int n, prenum, currentnum, cnt, condition;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        condition = 0;
        cnt = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> currentnum;
            if (j == 0)
            {
                prenum = currentnum;
                continue;
            }

            if (currentnum > prenum)
            {
                condition = 1;
            }
            else if (currentnum == prenum)
            {
                continue;
            }
            else
            {
                if (condition == 1)
                {
                    cnt++;
                }
                condition = 0;
            }
            prenum = currentnum;
        }
        cout << cnt << endl;
    }
}