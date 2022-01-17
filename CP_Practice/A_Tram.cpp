#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    int p = 0;
    int m = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p -= a;
        p += b;
        if (p >= m)
        {
            m = p;
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
