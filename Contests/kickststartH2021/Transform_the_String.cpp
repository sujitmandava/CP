#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string s, f;
    cin >> s >> f;

    int d1 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int k = 26;
        for (int j = 0; j < f.length(); j++)
        {
            if (abs(s[i] - f[j]) <= k)
            {
                k = abs(s[i] - f[j]);
            }
            if (k > 13)
            {
                k = 26 - k;
            }
        }
        d1 += k;
    }
    cout << d1;
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
