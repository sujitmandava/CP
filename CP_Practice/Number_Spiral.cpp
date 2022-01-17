#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll r, c;
    cin >> r >> c;
    if (r > c)
    {
        if (r % 2 == 0)
            cout << (r * r - r + 1) + (r - c);
        else
            cout << (r * r - r + 1) - (r - c);
    }
    else if (r == c)
        cout << r * r - r + 1;
    else
    {
        if (c % 2 == 0)
            cout << (c * c - c + 1) - (c - r);
        else
            cout << (c * c - c + 1) + (c - r);
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
