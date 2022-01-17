#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, m;
    cin >> n >> m;
    map<string, string> a;
    string x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        x.length() > y.length() ? a.insert(pair<string, string>(x, y)) : a.insert(pair<string, string>(x, x));
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << a.find(x)->second << " ";
    }
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
