#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    ll k = pow(2, n);

    if (k == 1)
    {
        cout << "YES";
        return;
    }

    ll m = INT16_MAX, M = INT16_MIN;
    ll t;

    for (int i = 0; i < k; i++)
    {
        cin >> t;
        if (i == 0)
        {
            M = t;
            m = t;
        }
        else
        {
            if (t >= M)
            {
                M = t;
            }
            else if (t <= m)
            {
                m = t;
            }

            if (M - m >= 2)
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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
