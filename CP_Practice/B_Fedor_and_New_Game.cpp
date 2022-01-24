#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

int count1s0s(int N)
{
    // Initialise count variables
    int count0 = 0, count1 = 0;

    // Iterate through all the bits
    while (N > 0)
    {

        // If current bit is 1
        if (N & 1)
        {
            count1++;
        }

        // If current bit is 0
        else
        {
            count0++;
        }

        N = N >> 1;
    }
    return count1;
}

void solve()
{
    int n, m, k, f;
    cin >> n >> m >> k;
    int x[m];
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    cin >> f;

    for (int i = 0; i < m; i++)
    {
        x[i] = x[i] ^ f;
    }
    int out = 0;
    for (int i = 0; i < m; i++)
    {
        if (abs(count1s0s(x[i])) <= k)
        {
            out++;
        }
    }
    cout << out;
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
        // cout << "Case #" << i + 1 << ": "; // For Google contests
        solve();
        cout << "\n";
    }

    return 0;
}
