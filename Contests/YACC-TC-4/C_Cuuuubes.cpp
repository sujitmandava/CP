#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    priority_queue<int> c;

    int m = n;
    int k;

    while (m > 0)
    {
        cin >> k;
        c.push(k);
        if (k == m)
        {
            while (c.top() == m)
            {
                cout << c.top() << " ";
                c.pop();
                m--;
            }
            cout << endl;
        }
        else
        {
            cout << endl;
        }
    }
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
