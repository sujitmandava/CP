#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

ll solve2(ll a, ll b, ll x, ll y, ll n)
{
    if (n <= (a - x))
    {
        a -= n;
    }
    else
    {
        n -= (a - x);
        a = x;

        if (n <= b - y)
        {
            b -= n;
        }
        else
        {
            b = y;
        }
    }
    return a * b;
}

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll k1, k2;
    k1 = solve2(a, b, x, y, n);
    k2 = solve2(b, a, y, x, n);
    k1 <= k2 ? cout << k1 : cout << k2;
    // if (n <= (a - x))
    // {
    //     a -= n;
    // }
    // else
    // {
    //     n -= (a - x);
    //     a = x;

    //     if (n <= b - y)
    //     {
    //         b -= n;
    //     }
    //     else
    //     {
    //         b = y;
    //     }
    // }
    // cout << a * b;
    return;
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
