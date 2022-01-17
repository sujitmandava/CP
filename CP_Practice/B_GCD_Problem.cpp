#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double
#define ull unsigned long long

bool coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}

void pairSum(int n)
{

    int mid = n / 2;

    for (int i = mid; i >= 1; i--)
    {
        if (coprime(i, n - i) == 1)
        {
            cout << i << " " << n - i << " ";
            break;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int k1, k2;
    pairSum(n - 1);
    cout << 1;
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
