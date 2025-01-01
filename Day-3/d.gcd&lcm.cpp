#include <bits/stdc++.h>
using namespace std;

long long int lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        int ans;
        if (x == y)
        {
            cout << x * 2 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < k; i++)
            {
                if (i % 2 == 0)
                {
                    if (x > y)
                    {
                        x = __gcd(x, y);
                    }
                    else
                    {
                        y = __gcd(x, y);
                    }
                }
                else
                {
                    if (x < y)
                    {
                        y = lcm(x, y);
                    }
                    else
                    {
                        x = lcm(x, y);
                    }
                }
            }
        }
        ans = x + y;
        cout << ans << endl;
    }
}