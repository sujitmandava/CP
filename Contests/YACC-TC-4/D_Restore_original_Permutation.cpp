#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int c[n] = {0};
    int m = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (m <= a[i])
        {
            m = a[i];
        }

        c[a[i] - 1]++;
    }

    for (int i = 0; i < m - 1; i++)
    {
        if (c[i] < c[i + 1])
        {
            cout << -1;
            return;
        }
    }

    cout << c[0] << endl;
    for (int i = 0; i < n; i++)
    {
        cout << c[a[i] - 1] << " ";
        c[a[i] - 1]--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_cases = 1;
    // cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
