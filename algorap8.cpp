#include <iostream>
using namespace std;
#include <cstring>
#include <string>
int mulofnum(string n);
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        unsigned long n;
        cin >> n;
        string temp = to_string(n);
        int ans = mulofnum(temp);
        cout << ans << '\n';
    }
}
int mulofnum(string n)
{
    int arr[n.length()];
    for (int i = 0; i < n.length(); i++)
    {
        arr[i] = n[i] - '0';
    }
    int mul;
    mul = 1;
    for (int i = 0; i < n.length(); i++)
    {
        if (arr[i] != 0)
        {
            mul *= arr[i];
        }
    }
    while (mul >= 10)
    {
        string str1 = to_string(mul);
        mulofnum(str1);
        mul = mulofnum(str1);
    }
    return mul;
}