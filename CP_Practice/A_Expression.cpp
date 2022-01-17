#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v;
    v.push_back(a + b + c);
    v.push_back(a * b + c);
    v.push_back(a + b * c);
    v.push_back(a * (b + c));
    v.push_back((a + b) * c);
    v.push_back(a * b * c);

    int max = INT16_MIN;

    for (auto i = v.cbegin(); i != v.cend(); i++)
    {
        if (*i >= max)
        {
            max = *i;
        }
    }
    cout << max;
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
