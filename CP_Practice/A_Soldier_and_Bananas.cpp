#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;

    int t = (w * (w + 1)) / 2;
    t *= k;

    if (t > n)
    {
        cout << t - n;
    }
    else
    {
        cout << "0";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_cases = 1;
    //cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
