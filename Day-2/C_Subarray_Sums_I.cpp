#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long ans = 0, sum = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        sum += v[r];

        while (sum > x && l <= r)
        {
            sum -= v[l];
            l++;
        }

        if (sum == x)
        {
            ans++;
        }

        r++;
    }

    cout << ans << endl;
    return 0;
}
