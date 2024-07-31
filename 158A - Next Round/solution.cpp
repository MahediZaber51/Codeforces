#include <iostream>
using namespace std;

int main()
{
    int t, k, r = 0;
    cin >> t >> k;
    int* p = new int[t];
    for (int i = 0; i < t; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (p[i] >= p[k - 1] && p[i] != 0)
        {
            r++;
        }
    }

    cout << r << endl;

    return 0;
}
