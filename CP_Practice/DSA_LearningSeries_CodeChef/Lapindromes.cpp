#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string s;
    int a[26], b[26];
    cin >> s;

    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }

    if (s.length() % 2 == 0)
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = s.length() / 2; i < s.length(); i++)
        {
            b[s[i] - 'a']++;
        }
    }
    else
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = (s.length() / 2) + 1; i < s.length(); i++)
        {
            b[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
