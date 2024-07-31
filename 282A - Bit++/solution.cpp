#include <iostream>
using namespace std;

int main()
{
    int t, r = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char a, b, c;
        cin >> a >> b >> c;
        if (a == '+')
        {
            ++r;
        }
        else if (c == '+')
        {
            r++;
        }
        else if (a == '-')
        {
            --r;
        }
        else if (c == '-')
        {
            r--;
        }
    }

    cout << r << endl;

    return 0;
}
