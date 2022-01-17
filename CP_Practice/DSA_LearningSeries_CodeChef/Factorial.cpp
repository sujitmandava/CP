// TLE
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    int k = 0;
    int a = 5;
    while (a <= n)
    {
        k += (n / a);
        a *= 5;
    }

    cout << k;
    // 5 10 15 20 25 30 35 40 45 50 55 60
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
