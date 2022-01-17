#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, t;
    cin >> n >> t;

    if (t < 10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else
    {
        if (n == 1)
        {
            cout << -1;
            return;
        }

        for (int i = 0; i < n - 1; i++)
        {
            cout << 1;
        }
        cout << 0;
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
