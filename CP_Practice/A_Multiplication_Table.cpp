#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll k = 0, t = 1;
    while (t <= n)
    {
        if (x % t == 0 && x / t <= n)
        {
            k++;
        }
        t++;
    }
    cout << k;
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
