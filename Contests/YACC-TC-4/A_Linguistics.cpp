#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string a, b;

    cin >> a >> b;
    reverse(b.begin(), b.end());

    if (a == b)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
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
