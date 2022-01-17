#include <bits/stdc++.h>

using namespace std;

void solve()
{
    float n, m;
    int t = 0;
    cin >> n >> m;

    while (n != m)
    {
        if (n > m)
        {
            n--;
            t++;
        }
        else
        {
            if (n < ceil(m / 2))
            {
                if (n == 1 || n == 2)
                {
                    n *= 2;
                    t++;
                }
                else
                {
                    n = 2 * (n - 1);
                    t += 2;
                }
            }
            else if (n == ceil(m / 2))
            {
                n *= 2;
                t++;
            }
            else
            {
                n--;
                t++;
            }

            // if ((m - 2 * (n - 1)) < (m - 2 * n))
            // {
            //     n--;
            //     t++;
            // }
            // else
            // {
            //     n *= 2;
            //     t++;
            // }
        }
    }
    cout << t;
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
