#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, r = 0, c = 1;
    cin >> a >> b;
    while (c)
    {
        a *= 3;
        b *= 2;

        r++;
        if (a > b) c = 0;
    }

    cout << r;

    return 0;
}
