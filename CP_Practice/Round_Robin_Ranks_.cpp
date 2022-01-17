#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll w = n - k;
    
    if (k % 2 == 0)
    {
        w += (k - 1) / 2;
    }
    else
    {
        w += k / 2;
    }

    cout << 2 * w;
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
