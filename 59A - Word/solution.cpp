#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int u = 0, l = 0;
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u == l || l > u)
    {
        for (int i = 0; i < (int)a.size(); i++)
        {
            a[i] = tolower(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < (int)a.size(); i++)
        {
            a[i] = toupper(a[i]);
        }
    }
    cout << a;
    return 0;
}
