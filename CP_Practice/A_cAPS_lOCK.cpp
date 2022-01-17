#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string s;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            ;
        }
        else
        {
            cout << s;
            return;
        }
    }
    if (islower(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    else
    {
        s[0] = tolower(s[0]);
    }

    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    cout << s;
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
