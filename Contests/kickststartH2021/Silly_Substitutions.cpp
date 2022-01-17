#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int i = 0;
    // if (s == "98765432101")
    // {
    //     cout << "1";
    //     return;
    // }
    while (i + 1 < n)
    {
        int c = 1;
    L1:
        if (s[i] == 0 || s[i + c] == 0)
        {
            c++;
            if (i + c == n)
                goto L2;
            else
                goto L1;
        }
    L2:
        if (s[i] - '0' == (((s[i + c] - '0') - 1) + 10) % 10)
        {
            s[i + c] = '0' + ((s[i + c] - '0' + 1) % 10);
            s[i] = 0;
            i = 0;
        }
        else
            i++;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] != 0)
        {
            cout << s[i];
        }
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
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
