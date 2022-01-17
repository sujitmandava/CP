#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k;
    cin >> k;

    int x1[k], y1[k], x2[k], y2[k];

    for (int i = 0; i < k; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    int x[k], y[k];
    for (int i = 0; i < k; i++)
    {
        x[i] = (x1[i] + x2[i]) / 2;
        y[i] = (y1[i] + y2[i]) / 2;
    }
    int xo = 0, yo = 0;
    for (int i = 0; i < k; i++)
    {
        xo += x[i];
        yo += y[i];
    }

    cout << xo / k << " " << yo / k;
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
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
