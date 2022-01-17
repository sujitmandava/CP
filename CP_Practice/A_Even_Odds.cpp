#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    double n, k;
    cin >> n >> k;
    cout.precision(17);
    if (k <= ceil(n / 2))
    {
        cout << (2 * k) - 1;
    }
    else
    {
        cout << 2 * (k - ceil(n / 2));
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
