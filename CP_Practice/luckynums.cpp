#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ln[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n, sqrtn;
    int i = 0;
    cin >> n;

    while (ln[i] <= n)
    {
        if (n % ln[i] == 0)
        {
            cout << "YES\n";
            return 0;
        }
        i++;
    }
    cout << "NO\n";
}