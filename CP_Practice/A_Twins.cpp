#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    int t1 = 0, t2 = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        t1 += a[i];
    }

    sort(a, a + n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (t2 > t1)
        {
            cout << k;
            return;
        }
        else
        {
            k++;
            t2 += a[i];
            t1 -= a[i];
        }
    }

    cout << k;
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
