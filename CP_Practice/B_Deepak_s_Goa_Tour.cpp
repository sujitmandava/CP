#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;

    int k = 0;
    int exp = 0;
    int base = 10;

    int nf = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] - '0' > 1)
        {
            int c = 1;
            int j = n.length() - i;
            while (j > 0)
            {
                nf = (10 * nf) + c;
                j--;
            }
            break;
        }
        else
        {
            nf = (10 * nf) + (n[i] - '0');
        }
    }

    while (nf > 0)
    {
        k = k + (nf % base) * pow(2, exp);
        exp++;
        nf = nf / 10;
    }
    cout << k;
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