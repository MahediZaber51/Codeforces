#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int t, r = 0;
    cin >> t;
    char* c = new char[t];
    for (int i = 0; i < t; i++)
    {
        cin >> c[i];
        if (c[i] == c[i - 1])
        {
            r++;
        }
    }
    cout << r;
    return 0;
}
