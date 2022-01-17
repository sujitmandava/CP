#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char c;
    while ((c = getchar()) != '\n')
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            continue;
        }
        else
        {
            cout << '.' << c;
        }      
    }      
}