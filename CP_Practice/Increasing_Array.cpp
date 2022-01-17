#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    ll a, b, m = 0;
    cin >> a;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b;
        if (b < a)
        {
            m += (a - b);
        }
        else
        {
            a = b;
        }
    }
    cout << m;
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
