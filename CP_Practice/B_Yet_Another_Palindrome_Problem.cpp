#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> s;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        if (s.count(a[i]) == 0)
        {
            s.insert(a[i]);
            m.insert(pair<int, int>(a[i], i));
        }
        else
        {
            auto itr = m.find(a[i]);
            if (i - itr->second >= 2)
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
    return;
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
