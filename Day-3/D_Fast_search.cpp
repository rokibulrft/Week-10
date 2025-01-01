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
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        int left = lower_bound(v.begin(), v.end(), a) - v.begin();
        int right = upper_bound(v.begin(), v.end(), b) - v.begin() - 1;
        if (left > right)
            cout << 0 << " ";
        else
            cout << (right - left + 1) << " ";
    }
    return 0;
}
