#include <bits/stdc++.h>
using namespace std;

int main()
{
    int case_num = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        cout << "CASE# " << case_num++ << ":\n";
        for (int i = 0; i < q; i++)
        {
            int num;
            cin >> num;
            int l = 0, r = n - 1, pos = -1;

            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (v[mid] == num)
                {
                    pos = mid;
                    r = mid - 1;
                }
                else if (v[mid] > num)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (pos != -1)
            {
                cout << num << " found at " << pos + 1 << '\n';
            }
            else
            {
                cout << num << " not found\n";
            }
        }
    }
}
