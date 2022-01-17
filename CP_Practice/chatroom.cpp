//Incomplete

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100] = {};
    char t[6] = {"hello"};
    cin >> s;
    int n = strlen(s);
    int counter = 0, letter = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[letter])
        {
            counter++;
            letter++;
            if (counter == 5)
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}