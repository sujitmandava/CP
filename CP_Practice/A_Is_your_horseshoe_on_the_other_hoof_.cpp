#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll a[4];
    int k = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
            {
                k++;
            }
        }
    }
    if (k == 6)
    {
        cout << 3;
    }
    else if (k < 6 && k > 1)
    {
        cout << 2;
    }
    else if (k == 1)
        cout << 1;
    else
        cout << 0;
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
