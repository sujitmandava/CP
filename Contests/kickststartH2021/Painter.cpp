#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    string p;
    cin >> n >> p;
    int k = 0;
    int b = 0;

    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'R' || p[i] == 'P' || p[i] == 'O' || p[i] == 'A')
        {
            b++;
            if (i == p.length() - 1)
            {
                k++;
                b = 0;
                break;
            }
        }
        else
        {
            if (b == 0)
            {
                ;
            }
            else
            {
                k++;
                b = 0;
            }
        }
    }

    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'B' || p[i] == 'P' || p[i] == 'A' || p[i] == 'G')
        {
            b++;
            if (i == p.length() - 1)
            {
                k++;
                b = 0;
                break;
            }
        }
        else
        {
            if (b == 0)
            {
                ;
            }
            else
            {
                k++;
                b = 0;
            }
        }
    }
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == 'Y' || p[i] == 'O' || p[i] == 'A' || p[i] == 'G')
        {
            b++;
            if (i == p.length() - 1)
            {
                k++;
                b = 0;
                break;
            }
        }
        else
        {
            if (b == 0)
            {
                ;
            }
            else
            {
                k++;
                b = 0;
            }
        }
    }

    cout << k;
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
