#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (i == n - 1)
                cout << "I hate it ";
            else
                cout << "I hate that ";
        }
        else
        {
            if (i == n - 1)
                cout << "I love it ";
            else
                cout << "I love that ";
        }
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
