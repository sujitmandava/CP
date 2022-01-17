#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long
#define float double;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<ll> k;
    k.push_back(a * (x + y));
    if (x < y)
        swap(x, y);
    k.push_back(b * (y) + a * (x - y));
    k[0] < k[1] ? cout << k[0] : cout << k[1];
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
