#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int t;
    char c;
    while (cin >> t)
    {
        cin.ignore();
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (i != (int)a.size() - 1)
        {
            cout << a[i] << "+";
        }
        else
        {
            cout << a[i];
        }
    }
    return 0;
}
