#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    bool b[n] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll s = 0, ms = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == false)
        {
            s = 0;
            int f = 0;
            for (int j = i; j < n;)
            {
                if (b[j] == true)
                {
                    break;
                    f = 1;
                }

                b[j] = true;
                s += a[j];
                j += a[j];
            }
            if (s >= ms && f == 0)
            {
                ms = s;
            }
        }
    }
    cout << ms;
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
