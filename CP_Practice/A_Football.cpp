#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        string s;
        cin >> s;
        cout << s;
        return;
    }

    string a, b, k;
    int p = 0, q = 0;

    cin >> a;
    p++;
    for (int i = 1; i < n; i++)
    {
        cin >> k;
        if (k == a)
        {
            p++;
        }
        else
        {
            b = k;
            q++;
        }
    }
    if (p > q)
        cout << a;
    else
        cout << b;
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
