#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    stack<char> v, k;

    int c = 0;

    for (int i = 0; i < s.length(); i++)
    {
        v.push(s[i]);
        if (c == 0)
        {
            if (s[i] == 'W')
                c++;
            else
                c = 0;
        }
        else if (c == 1)
        {
            if (s[i] == 'U')
                c++;
            else
                c = (s[i] == 'W' ? 1 : 0);
        }
        else if (c == 2)
        {
            if (s[i] == 'B')
            {
                c++;
            }
            else
                c = (s[i] == 'W' ? 1 : 0);
        }

        if (c == 3)
        {
            c = 0;
            v.pop();
            v.pop();
            v.pop();
            if (v.empty() == false && v.top() != ' ')
            {
                v.push(' ');
            }
        }
    }
    while (v.empty() == false)
    {
        k.push(v.top());
        v.pop();
    }

    while (k.empty() == false)
    {
        cout << k.top();
        k.pop();
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
