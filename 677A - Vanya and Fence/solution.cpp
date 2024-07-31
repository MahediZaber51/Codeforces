#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,h,result=0;
    cin >> n >> h;
    while(n--)
    {
        int a;
        cin >> a;
        if (a > h)
        {
            result += 2;
        }
        else
        {
            result += 1;
        }
    }

    cout << result;
    return 0;
}
