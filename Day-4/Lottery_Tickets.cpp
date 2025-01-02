#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int chef = v[0];
        sort(v.begin(), v.end());

        int chef_pos = find(v.begin(), v.end(), chef) - v.begin();
        int result = 0;

        if (chef_pos == 0)
        {
            result = (v[1] - chef) / 2 + 1;
        }
        else if (chef_pos == n - 1)
        {
            result = (chef - v[n - 2]) / 2 + 1;
        }
        else
        {
            int left = (chef - v[chef_pos - 1]) / 2;
            int right = (v[chef_pos + 1] - chef) / 2;
            result = left + right + 1;
        }

        cout << result << '\n';
    }
    return 0;
}