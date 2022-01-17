#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define float double

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if ((a + c) % (2 * b) == 0)
    {
        if (b != 1)
        {   
            cout << "YES";
            return;
        }
        else
        {
            if ((a + c) % 2 == 0)
            {
                cout << "YES";
                return;
            }
        }
    }

    if ((2 * b - c) % a == 0 && (2 * b - c) > 0)
    {
        cout << "YES";
        return;
    }
    else if ((2 * b - a) % c == 0 && (2 * b - a) > 0)
    {
        cout << "YES";
        return;
    }
    else
    {
        cout << "NO";
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
