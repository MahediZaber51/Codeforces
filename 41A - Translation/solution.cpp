#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, t;
    cin >> a >> t;
    int n = (int)a.size() - 1;
    for (int i = 0; i <= n; i++)
    {
        if (a[i] != t[n - i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
