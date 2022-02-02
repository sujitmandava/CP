#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

void solve()
{
    int n;
    cin >> n;

    int k[2] = {0};
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        switch (t)
        {
        case 25:
            k[0]++;
            break;
        case 50:
            if (k[0] > 0)
            {
                k[0]--;
                k[1]++;
            }
            else
            {
                cout << "NO";
                return;
            }
            break;
        case 100:
            if (k[0] >= 1 && k[1] >= 1)
            {
                k[0]--;
                k[1]--;
            }
            else if ((k[0] >= 3))
            {
                k[0] -= 3;
            }
            else
            {
                cout << "NO";
                return;
            }
            break;

        default:
            break;
        }
    }
    cout << "YES";
    return;
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
