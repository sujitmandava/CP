#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    char p;
    string s;
    int f = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> s;
        if (i == 0)
        {
            cout << s;
            p = s[1];
        }
        else
        {
            if (s[0] == p)
            {
                cout << s[1];
            }
            else
            {
                cout << s;
                f = 1;
            }

            p = s[1];
        }
    }
    if (f == 0)
        cout << "a";
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
