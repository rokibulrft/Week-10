#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        int l = 1, r = n, ans = 0, past = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] <= num)
            {
                ans += mid - past;
                past = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}