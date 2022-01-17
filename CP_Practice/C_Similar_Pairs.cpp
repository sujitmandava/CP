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
    vector<int> b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    if (b.size() % 2 == 0 && c.size() % 2 == 0)
    {
        cout << "YES";
        return;
    }
    else
    {
        for (int i = 0; i < b.size(); i++)
        {
            if (binary_search(c.begin(), c.end(), b[i] + 1) || binary_search(c.begin(), c.end(), b[i] - 1))
            {
                cout << "YES";
                return;
            }
        }

        cout << "NO";
        return;
    }
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
