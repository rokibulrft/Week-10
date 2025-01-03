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
        vector<long long> pref(n + 1);
        vector<int> prefmax(n);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            pref[i] = pref[i - 1] + x;
            prefmax[i - 1] = i == 1 ? x : max(prefmax[i - 2], x);
        }

        while (q--)
        {
            int k, l = 0, r = n - 1, ans = 0;
            cin >> k;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (prefmax[mid] <= k)
                    ans = mid + 1, l = mid + 1;
                else
                    r = mid - 1;
            }
            cout << pref[ans] << ' ';
        }
        cout << '\n';
    }
}
