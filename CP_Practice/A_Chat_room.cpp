#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string s;
    cin >> s;
    int j = 0;

    for (int i = 0; i < s.length(); i++)
    {
        switch (j)
        {
        case 0:
            if (s[i] == 'h')
            {
                j++;
            }
            break;
        case 1:
            if (s[i] == 'h')
            {
                ;
            }
            else if (s[i] == 'e')
            {
                j++;
            }

            break;
        case 2:
            if (s[i] == 'e')
            {
                ;
            }
            else if (s[i] == 'l')
            {
                j++;
            }

            break;
        case 3:
            if (s[i] == 'l')
            {
                j++;
            }

            break;
        case 4:
            if (s[i] == 'l')
            {
                ;
            }
            else if (s[i] == 'o')
            {
                j++;
            }
            break;
        case 5:
            cout << "YES";
            return;

        default:
            break;
        }
    }
    if (j == 5)
    {
        cout << "YES";
        return;
    }

    cout << "NO";
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
