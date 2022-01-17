#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    int k = 0;
    int i = 1, j = 1;
    while (1)
    {
        if (rb == rd || cb == cd)
        {
            cout << k;
            return;
        }
        k++;
        if (rb == n)
        {
            i = (-1) * i;
        }
        if (cb == m)
        {
            j = (-1) * j;
        }

        rb += i;
        cb += j;
    }

    // if (rb == rd || cb == cd)
    // {
    //     cout << 0;
    //     return;
    // }

    // int k = 0;
    // int p = 1, q = 1;
    // while (1)
    // {
    //     k++;
    //     if (rb == n)
    //     {
    //         p = (-1) * p;
    //     }
    //     if (cb == m)
    //     {
    //         q = (-1) * q;
    //     }

    //     rb += p;
    //     cb += q;
    //     if (rb == rd || cb == cd)
    //     {
    //         cout << k;
    //         return;
    //     }
    // }
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
