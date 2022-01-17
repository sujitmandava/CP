#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int m, n, r, c;
    cin >> m >> n >> r >> c;
    char k[m][n];
    set<int> sr, sc;
    int b = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> k[i][j];
            if (k[i][j] == 'B')
            {
                b++;
            }
        }
    }
    if (b == 0)
    {
        cout << -1;
        return;
    }
    else
    {
        if (k[r - 1][c - 1] == 'B')
        {
            cout << 0;
            return;
        }
        for (int i = 0; i < m; i++)
        {
            if (k[i][c - 1] == 'B')
            {
                if (i == r - 1)
                {
                    cout << 0;
                    return;
                }
                else
                {
                    cout << 1;
                    return;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (k[r - 1][i] == 'B')
            {
                if (i == c - 1)
                {
                    cout << 0;
                    return;
                }
                else
                {
                    cout << 1;
                    return;
                }
            }
        }
        cout << 2;
        return;
    }
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
