#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int a, b;
    cin >> a >> b;
    int n = 0;
    int out = 0;
    while (a > 0)
    {
        n = n + a + (out/b);
        a += out;
        out = a % b;
        a /= b;
    }
    cout << n;
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
