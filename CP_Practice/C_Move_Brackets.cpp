#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = INT16_MAX;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
        {
            a--;
            k = a < k ? a : k;
        }
        else
            a++;
    }
    cout << (-1)*k;
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
