#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;
    ll k[n], min = INT16_MAX;
    int min_i;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        if (k[i] < min)
        {
            min = k[i];
            min_i = i;
        }
    }
    if (min_i == 0)
    {
        if (k[2] < 3)
        {
            cout << min;
        }
        else
        {
            k[min_i] += ()
        }
        
    }
    
    if (min_i == n-1)
    {
        cout << min;
        return;
    }
    if (min_i == n-2)
    {
        if (k[n-1])
        {
            /* code */
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
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
