#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

// float highestPowerof2(float n)
// {
//     float res = 0;
//     for (ll i = n; i >= 1; i--)
//     {
//         // If i is a power of 2
//         if ((i & (i - 1)) == 0)
//         {
//             res = i;
//             break;
//         }
//     }
//     return res;
// }

void solve()
{
    ll n;
    cin >> n;
    ll k = 1;
    while (5 * k < n)
    {
        n -= 5 * k;
        k *= 2;
    }
    string m[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << m[(n - 1) / k];
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
