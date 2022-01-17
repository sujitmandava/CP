#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string k;
    cin >> k;

    string s;
    cin >> s;
    int m = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        int a = (k.find(s[i]) - k.find(s[i + 1]));
        m += abs(a);
    }
    cout << m;
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
