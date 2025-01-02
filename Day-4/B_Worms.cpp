#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int num;
        cin >> num;
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (pre[mid] >= num)
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
}