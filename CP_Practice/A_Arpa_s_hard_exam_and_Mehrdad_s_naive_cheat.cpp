#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return;
    }
    switch (n % 4)
    {
    case 1:
        cout << 8;
        break;
    case 2:
        cout << 4;
        break;
    case 3:
        cout << 2;
        break;
    case 0:
        cout << 6;
        break;
    default:
        break;
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
