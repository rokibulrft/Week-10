#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int num;
        cin >> num;
        int l = 0, r = n - 1;
        bool found = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (num == v[mid])
            {
                found = true;
                break;
            }
            else if (num < v[mid])
            {
                r = mid - 1;
            }
            else if (num > v[mid])
            {
                l = mid + 1;
            }
        }
        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}