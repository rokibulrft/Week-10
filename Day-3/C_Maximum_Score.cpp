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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> dif(n);
        for (int i = 0; i < n - 1; i++)
        {
            dif[i] = abs(v[i] - v[i + 1]);
        }
        int s1 = 0, s2 = 0, ans;
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                s1 += dif[i];
            }
            else
            {
                s2 += dif[i];
            }
        }
        cout << max(s1, s2) << endl;
    }
}