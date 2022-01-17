#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
    int n;
    cin >> n;
    ll a[n];
    int k1 = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            k1++;
    }
    sort(a, a + n);

    if (n == 1)
    {
        cout << 2;
        return;
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
