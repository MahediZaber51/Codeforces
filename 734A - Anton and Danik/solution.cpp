#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a = 0, d = 0;
    string g;
    cin >> n;
    cin >> g;
    for (int i = 0; i < n; i++)
    {
        if (g[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}
