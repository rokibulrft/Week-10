#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        int l = 0, r = n - 1, first = -1, second = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] < num)
            {
                first = v[mid];
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] > num)
            {
                second = v[mid];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (first == -1 && second == -1)
        {
            cout << "X X\n";
        }
        else if (first == -1 && second != -1)
        {
            cout << "X " << second << '\n';
        }
        else if (first != -1 & second == -1)
        {
            cout << first << " X\n";
        }
        else
        {
            cout << first << " " << second << '\n';
        }
    }
}