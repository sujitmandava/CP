#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int x, y;
    cin >> x >> y;
    int k = 0;

    while (1)
    {
        if (x > y)
        {
            x--;
            k++;
        }
        else if (x < y)
        {
            x += 2;
            k++;
        }
        else
        {
            cout << k;
            return;
        }
    }
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
