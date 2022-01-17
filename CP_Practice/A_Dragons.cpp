#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

multimap<int, int> sortmap(multimap<int, int> &M)
{

    // Declare a multimap
    multimap<int, int> MM;

    // Insert every (key-value) pairs from
    // map M to multimap MM as (value-key)
    // pairs
    for (auto &it : M)
    {
        MM.insert({it.second, it.first});
    }

    return MM;
}
void solve()
{
    int s, n;
    cin >> s >> n;
    multimap<int, int> a;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.insert(pair<int, int>(y, x));
    }

    a = sortmap(a);

    multimap<int, int>::iterator i;
    for (i = a.begin(); i != a.end(); ++i)
    {
        if (s <= i->first)
        {
            cout << "NO";
            return;
        }
        else
        {
            s += i->second;
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
    // cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
