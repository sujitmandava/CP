#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string st;
    cin >> st;

    long long count = 0, temp = 0;
    for (long long i = 0; i < st.length(); i++)
    {
        if (st[i] == '<')
        {
            temp++;
        }
        else
        {
            temp--;
        }

        if (temp < 0)
        {
            break;
        }
        if (temp == 0)
        {
            count = i + 1;
        }
    }
    cout << count;
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
