#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int m = 0;
    int start = 0;
    int e = n - 1;
    for (int i = e; k > 0; k--)
    {
        if (a[i] != a[i - 1])
            break;
        else
        {
            m += 1;
            e -= 2;
            i = e;
        }
    }
    stack<int> s;
    for (int i = 0; i <= e; i++)
    {
        if (k == 0)
        {
            break;
        }
        start++;
        if (s.empty() || s.top() == a[i])
            s.push(a[i]);
        else
        {
            m += s.top() / a[i];
            s.pop();
            k--;
        }
    }

    for (int i = start; i <= e; i++)
    {
        m += a[i];
    }
    while (!s.empty())
    {
        if (k != 0)
        {
            int t = s.top();
            s.pop();
            m += s.top() / t;
            s.pop();
            k--;
        }
        else
        {
            m += s.top();
            s.pop();
        }
    }

    cout << m;
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
