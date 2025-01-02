#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool has0 = false, has1 = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                has0 = true;
            else if (s[i] == '1')
                has1 = true;
        }
        if (has0 & has1)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << n << '\n';
        }
    }
}