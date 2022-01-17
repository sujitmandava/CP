#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n, m, a;

    cin >> n;
    cin >> m;
    cin >> a;

    cout << (long long) ceil(m/a) * (long long) ceil(n/a);

    return 0;
}