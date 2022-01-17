#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    int a[n], sa = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sa += a[i];
    }
    int b[n - 1], sb = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        sb += b[i];
    }
    int c[n - 2], sc = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        sc += c[i];
    }
    cout << sa - sb << "\n"
         << sb - sc << "\n";
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
