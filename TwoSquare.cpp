#include <iostream>

#include <math.h>
using namespace std;
int area(int x1, int x2, int y1, int y2);
int round(int x1, int x2, int y1, int y2);
int main()
{
    int t;
    cin >> t;

    int x[4];
    int y[4];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j <= 2; j = j + 2)
        {
            cin >> x[j] >> y[j] >> x[j + 1] >> y[j + 1];
        }
        int difsquarearea, difsquareround;

        int square1area = area(x[0], x[1], y[0], y[1]);
        int square2area = area(x[2], x[3], y[2], y[3]);
        int square1round = round(x[0], x[1], y[0], y[1]);
        int square2round = round(x[2], x[3], y[2], y[3]);

        if ((x[2] >= x[0] && x[2] <= x[1]) && (y[2] >= y[0] && y[2] <= y[1]))
        {
            difsquarearea = area(min(x[3], x[1]), max(x[0], x[2]), min(y[3], y[1]), max(y[0], y[2]));
            difsquareround = round(min(x[3], x[1]), max(x[0], x[2]), min(y[3], y[1]), max(y[0], y[2]));
        }
        else if ((x[0] >= x[2] && x[0] <= x[3]) && (y[0] >= y[2] && y[0] <= y[3]))
        {
            difsquarearea = area(min(x[3], x[1]), max(x[0], x[2]), min(y[3], y[1]), max(y[0], y[2]));
            difsquareround = round(min(x[3], x[1]), max(x[0], x[2]), min(y[3], y[1]), max(y[0], y[2]));
        }
        else
        {
            difsquarearea = 0;
            difsquareround = 0;
        }

        int ans_area = square1area + square2area - difsquarearea;
        int ans_round = square1round + square2round - difsquareround;

        cout << ans_area << ' ' << ans_round << endl;
    }
}

int area(int x1, int x2, int y1, int y2)
{
    int temp = (x1 - x2) * (y1 - y2);
    return temp;
}

int round(int x1, int x2, int y1, int y2)
{
    int temp = (abs(x1 - x2) + abs(y1 - y2)) * 2;

    return temp;
}