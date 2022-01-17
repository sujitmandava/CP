#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int xn = 0, yn = 0, zn = 0;
    int x, y, z;
    while (n--)
    {
        cin >> x >> y >> z;
        xn += x;
        yn += y;
        zn += z;
    }
    if (xn == 0 && yn == 0 && zn == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}