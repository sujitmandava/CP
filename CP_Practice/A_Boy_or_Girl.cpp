#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    bool l[26] = {false};
    int k = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (l[s[i] - 'a'] == false)
        {
            l[s[i] - 'a'] = true;
            k++;
        }
    }

    if (k % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
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
