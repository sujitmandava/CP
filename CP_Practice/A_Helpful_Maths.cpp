#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string math;
    cin >> math;

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < math.length(); i++)
    {
        if (math[i] == '1')
        {
            a++;
        }
        else if (math[i] == '2')
        {
            b++;
        }
        else if (math[i] == '3')
        {
            c++;
        }
    }

    for (int i = 0; i < math.length(); i += 2)
    {
        if (a > 0)
        {
            math[i] = '1';
            a--;
        }
        else if (b > 0)
        {
            math[i] = '2';
            b--;
        }
        else if (c > 0)
        {
            math[i] = '3';
            c--;
        }
    }

    cout << math;
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
