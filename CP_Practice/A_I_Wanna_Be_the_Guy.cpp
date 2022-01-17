#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    bool k[n] = {false};
    int p, q;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
        k[a[i] - 1] = true;
    }
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        k[b[i] - 1] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (k[i] == false)
        {
            cout << "Oh, my keyboard!";
            return;
        }
    }
    cout << "I become the guy.";
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
