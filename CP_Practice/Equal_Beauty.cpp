#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    ll arr[n], k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    k = arr[n - 1] + arr[0];

    int res_l = 1, res_r = 2;
    int l = 1, r = n - 2, diff = INT_MAX;
    while (r > l)
    {
        if (abs(arr[l] + arr[r] - k) < diff)
        {
            res_l = l;
            res_r = r;
            diff = abs(arr[l] + arr[r] - k);
        }

        if (arr[l] + arr[r] > k)
            r--;
        else
            l++;
    }

    // cout << arr[res_l] << " " << arr[res_r] << endl;

    cout << abs(arr[res_l] + arr[res_r] - k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_cases = 1;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}