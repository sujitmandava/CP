#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int_fast64_t n;
    cin >> n;
    map<int_fast64_t, int_fast64_t> c;
    for (int_fast64_t i = 1; i * i * i < n; i++)
    {
        c[i*i*i] = i;
    }
    for (auto itr = c.begin(); itr != c.end(); itr++)
    {
        int_fast64_t k = n - itr->first;
        if (c.find(k) != c.end())
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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
