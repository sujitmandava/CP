#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c, k;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        k = a;
    }
    else if (b >= a && b >= c)
    {
        k = b;
    }
    else
    {
        k = c;
    }

    if (a == b && a == c)
    {
        cout << "1 1 1";
    }
    else if (a == b && a != c)
    {
        if (a > c)
        {
            cout << "1 1 " << k + 1 - c;
        }
        else
        {
            cout << k - a + 1 << " " << k - b + 1 << " 0";
        }
    }
    else if (a == c && a != b)
    {
        if (a > b)
        {
            cout << "1 " << k + 1 - b << " 1";
        }
        else
        {
            cout << k - a + 1 << " 0 " << k - c + 1;
        }
    }
    else if (b == c && b != a)
    {
        if (b > a)
        {
            cout << k - a + 1 << " 1 1";
        }
        else
        {
            cout << "0 " << k - b + 1 << " " << k - c + 1;
        }
    }
    else
    {
        if (k == a)
        {
            cout << "0 " << k - b + 1 << " " << k - c + 1;
        }
        else if (k == b)
        {
            cout << k - a + 1 << " 0 " << k - c + 1;
        }
        else
        {
            cout << k - a + 1 << " " << k - b + 1 << " 0";
        }
    }

    // cout << k - a + 1 << " " << k - b + 1 << " " << k - c + 1;
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
