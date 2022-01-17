#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, t;
    cin >> n >> t;

    string l;
    cin >> l;

    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < l.length() - 1; i++)
        {
            if (l[i] == 'B' && l[i + 1] == 'G')
            {
                l[i] = 'G';
                l[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << l;
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
