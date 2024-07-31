#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t, r = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a && b) || (b && c) || (c && a))
        {
            r++;
        }
    }

    cout << r << endl;

    return 0;
}
