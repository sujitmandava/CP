#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long
#define float double;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b == 1)
    {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    cout << a << " " << a * b << " " << a * (b + 1);
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
