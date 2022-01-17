#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;

    queue<int> k;

    k.push(4);
    k.push(7);
    int i;

    do
    {
        i = k.front();
        if (n % i == 0)
        {
            cout << "YES";
            return;
        }
        k.push(10 * i + 4);
        k.push(10 * i + 7);

        k.pop();

    } while (i <= n);
    cout << "NO";
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
