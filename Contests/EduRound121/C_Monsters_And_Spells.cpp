#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int n;
    cin >> n;

    ll k[n], h[n];

    ll m = 0, tc = 1, x = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (h[i] == 1)
        {
            m++;
        }
        else
        {
            if (k[i] - tc > h[i] - x)
            {
                m += (h[i]) * (h[i] + 1) / 2;
            }
            else
            {
                m += (h[i]) * (h[i] + 1) / 2;
                if (h[i] != 1)
                {
                    m -= x * (x + 1) / 2;
                }
            }
        }
        tc = k[i];
        x = h[i];
    }
    cout << m;
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
