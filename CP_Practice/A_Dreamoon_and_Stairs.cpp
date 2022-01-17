#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n < m)
        cout << -1;
    else
    {
        int k = n / 2 + (n % 2);
        while (1)
        {
            if (k % m == 0)
            {
                cout << k;
                return;
            }
            k++;
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
