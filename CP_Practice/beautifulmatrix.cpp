#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m[5][5];
    int r, c, moves = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    while (r != 2)
    {
        if (r < 2)
        {
            moves++;
            r++;
        }
        if (r > 2)
        {
            moves++;
            r--;
        }
    }

    while (c != 2)
    {
        if (c < 2)
        {
            moves++;
            c++;
        }
        if (c > 2)
        {
            moves++;
            c--;
        }
    }

    cout << moves << endl;
}