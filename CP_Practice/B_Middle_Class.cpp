#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int n;
    float x;
    cin >> n >> x;
    float a[n];
    float k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        k += a[i];
    }
    sort(a, a + n);

    int m = n;

    for (int i = 0; i < n; i++)
    {
        if (k / m >= x)
        {
            cout << m;
            return;
        }
        k -= a[i];
        m--;
    }
    cout << 0;
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
        // cout << "Case #" << i + 1 << ": "; // For Google contests
        solve();
        cout << "\n";
    }

    return 0;
}
