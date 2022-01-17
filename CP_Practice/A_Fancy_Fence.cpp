#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double

void solve()
{
    float a;
    cin >> a;
    float k = 0;
    float n = 3;
    while (k < a)
    {
        k = (n - 2) * 180.0 / n;
        n++;
    }
    k == a ? cout << "YES" : cout << "NO";
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
