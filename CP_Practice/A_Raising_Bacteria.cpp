#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n;
    cin >> n;
    int k = 0;

    vector<ll> v;

    while (n > 0)
    {
        v.push_back(n % 2);
        n/= 2;
    }

    // Displaying the output when
    // the bit is '1' in binary
    // equivalent of number.
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            k++;
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
