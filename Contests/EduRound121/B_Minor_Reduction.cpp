#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    string s;
    cin >> s;
    int f = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if ((s[i] - '0') + (s[i - 1] - '0') >= 10)
        {
            int a = ((s[i] - '0') + (s[i - 1] - '0')) / 10;
            int b = ((s[i] - '0') + (s[i - 1] - '0')) % 10;
            s[i] = b + '0';
            s[i - 1] = a + '0';
            f = 1;
            break;
        }
    }
    if (f != 1)
    {
        int a = ((s[1] - '0') + (s[0] - '0')) / 10;
        int b = ((s[1] - '0') + (s[0] - '0')) % 10;
        s[1] = b + '0';
        s[0] = a + '0';
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0')
        {
            cout << s[i];
            f = 2;
        }
        else if (s[i] == '0' && f == 2)
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
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
