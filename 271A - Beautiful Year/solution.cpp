#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool found(int number)
{
    char seen[10] = {0};
    while (number)
    {
        int digit = number % 10;
        number /= 10;
        if (seen[digit]++)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a;
    cin >> a;
    a++;
    while (found(a))
    {
        a++;
    }
    cout << a;

    return 0;
}
