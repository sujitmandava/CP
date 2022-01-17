#include <iostream>

using namespace std;

int main()
{
    int n;
    int x = 0;
    string input;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == "X++" || input == "++X")
        {
            x++;
        }
        else if (input == "X--" || input == "--X")
        {
            x--;
        }        
    }
    cout << x << endl;
}