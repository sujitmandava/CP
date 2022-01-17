#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int sumodd = 0;
    int odd = 1;
    if (n % 4 != 0)
    {
        cout << "NO";
        return;
    }
    cout << "YES\n";

    for (int i = 1; i <= n / 2; i++)
    {
        cout << 2 * i << " ";
        sum += 2 * i;
    }
    for (int i = 0; i < (n / 2) - 1; i++)
    {
        cout << odd << " ";
        sumodd += odd;
        odd += 2;
    }
    cout << sum - sumodd;
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
