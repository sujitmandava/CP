#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, d, c, m;
    cin >> n >> d >> c >> m;

    string s;
    cin >> s;
    int cats = 0, dogs = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'C')
        {
            cats++;
        }
        else if (s[i] == 'D')
        {
            dogs++;
        }
    }

    if (dogs == 0)
    {
        cout << "YES";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            if (d == 0)
            {
                cout << "NO";
                dogs--;
                break;
            }
            else
            {
                d--;
                dogs--;
                if (dogs == 0)
                {
                    cout << "YES";
                    break;
                }
                c = c + m;
            }
        }
        else if (s[i] == 'C')
        {
            if (c == 0)
            {
                cout << "NO";
                break;
            }
            else
            {
                c--;
                cats--;
            }
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
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
