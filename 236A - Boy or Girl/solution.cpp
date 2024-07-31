#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string a;
    cin >> a;
    unordered_set<char> seen;
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (seen.find(a[i]) == seen.end())
        {
            seen.insert(a[i]);
        }
    }
    if (seen.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
