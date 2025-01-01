#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<int> presum(n);
        presum[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            presum[i] = presum[i - 1] + v[i];
        }
        while (q--)
        {
            int a;
            cin >> a;
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (presum[mid] >= a)
                {
                    ans = mid + 1;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
        }
    }
}