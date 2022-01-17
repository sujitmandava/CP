#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    double k = 0;
    double a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        k += a;
    }
    cout << k / n;
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
