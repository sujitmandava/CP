#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_cases = 1;
    //cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        //cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
