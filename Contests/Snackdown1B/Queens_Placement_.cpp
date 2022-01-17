#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j || i == 0 || i == n - 1)
                {
                    cout << ".";
                }
                else
                {
                    cout << "Q";
                }
            }
            if (i == n - 1)
                ;
            else
                cout << "\n";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j || i == 0 || i == n - 1)
                {
                    if (i == 0 && j == 0)
                        cout << "Q";
                    else
                        cout << ".";
                }
                else
                {
                    if (i != 1)
                        cout << "Q";
                    else
                        cout << ".";
                }
            }
            if (i == n - 1)
                ;
            else
                cout << "\n";
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
