#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, r = 0;
    cin >> a;
    while (a)
    {
        if (a >= 5)
        {
            a -= 5;
        }
        else if (a >= 4)
        {
            a -= 4;
        }
        else if (a >= 3)
        {
            a -= 3;
        }
        else if (a >= 2)
        {
            a -= 2;
        }
        else
        {
            a -= 1;
        }
        r++;
    }

    cout << r;

    return 0;
}
