#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    int v[n];
    int k = 0;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        switch (v[i])
        {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;

        default:
            break;
        }
    }

    k += d; //  All 4's 
    k += c; // All 3 and 1's possible; If insufficient 1;s then only 3s
    a -= c; // Subtract all used 1s
    k += (b / 2); //  Pair 2s
    if (b % 2 != 0) // If odd number of 2s pair with 2 ones each; If insufficient 1s only 2s
    {
        k++;
        a -= 2;
    }
    if (a > 0) // If more ones remaining group 1s accordingly
    {
        k += a / 4;
        if (a % 4 != 0)
            k++;
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
