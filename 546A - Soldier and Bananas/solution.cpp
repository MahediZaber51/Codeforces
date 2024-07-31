#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k, n, w, r = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        r += i * k;
    }
    r = r - n;
    if (r > 0)
    {
        cout << r;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
