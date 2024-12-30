#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int num;
        cin >> num;
        int l = 1, r = n, ans = n + 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] >= num)
            {
                ans = mid;
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