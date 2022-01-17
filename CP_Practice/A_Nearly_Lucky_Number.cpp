#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string n;
    cin >> n;
    ll k = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
            k++;
    }

    if (k == 0)
    {
        cout << " NO";
        return;
    }

    while (k > 0)
    {
        if ((k % 10 != 4) && (k % 10 != 7))
        {
            cout << "NO";
            return;
        }
        k /= 10;
    }
    cout << "YES";
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
