#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int x;
    cin >> x;
    int k = 0;
    for (int i = 5; i >= 1; i--)
    {
        k += (x / i);
        x %= i;
        if (x == 0)
            break;
    }
    cout << k;
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
