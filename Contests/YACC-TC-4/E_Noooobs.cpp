#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = x - a[i];
        c += a[i];
    }
    if (c == 0)
    {
        /* code */
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
