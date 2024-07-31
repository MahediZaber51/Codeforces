#include <iostream>
using namespace std;

int main()
{
    int m, n, r = 0;
    cin >> m >> n;

    r += (m / 2) * n;
    if (m % 2 != 0)
    {
        r += (n / 2);
    }

    cout << r << endl;

    return 0;
}
