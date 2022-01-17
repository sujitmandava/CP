#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n == 1)
    {
        cout << "0";
        return;
    }

    char a = s[0];
    char b = s[1];
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (a != b)
        {
            a = b;
            b = s[i + 1];
        }
        else
        {
            b = s[i + 1];
            k++;
        }
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
