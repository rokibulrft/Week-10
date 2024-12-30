#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    long long total_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        total_sum += p[i];
    }

    long long min_diff = LLONG_MAX;

    // Iterate through all possible subsets (2^n subsets)
    for (int mask = 0; mask < (1 << n); mask++)
    {
        long long subset_sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                subset_sum += p[i];
            }
        }

        long long other_sum = total_sum - subset_sum;
        min_diff = min(min_diff, abs(subset_sum - other_sum));
    }

    cout << min_diff << endl;
    return 0;
}
