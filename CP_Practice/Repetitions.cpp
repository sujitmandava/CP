#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string s;
    cin >> s;
    ll k = 0;
    ll m = 1;
    char cc = 'K';
    for (int i = 0; i < s.length(); i++)
    {
        if (cc == s[i])
        {
            k++;
            if (m <= k)
                m = k;
        }
        else
        {
            cc = s[i];
            if (m <= k)
                m = k;
            k = 1;
        }
    }
    cout << m;
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
