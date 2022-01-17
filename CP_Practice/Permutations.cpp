#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION";
        return;
    }
    int i = 1, j = 2;

    while (j <= n)
    {
        cout << j << " ";
        j += 2;
    }
    while (i <= n)
    {
        cout << i << " ";
        i += 2;
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
