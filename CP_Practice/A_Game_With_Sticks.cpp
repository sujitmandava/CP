#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int m, n;
    cin >> m >> n;
    int k = m < n ? m : n;
    if (k % 2 == 0)
    {
        cout << "Malvika";
    }
    else
        cout << "Akshat";
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
