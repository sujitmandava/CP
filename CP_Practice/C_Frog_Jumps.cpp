#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    string s;
    cin >> s;
    vector<int> r;
    r.push_back(0);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
            r.push_back(i + 1);
    }
    r.push_back(s.length() + 1);
    int d = 0;
    for (auto i = r.begin(); i != r.end() - 1; i++)
    {
        if (*(i + 1) - *(i) > d)
        {
            d = *(i + 1) - *(i);
        }
    }
    cout << d;
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
