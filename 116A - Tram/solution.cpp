#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,result = 0,m=0;
    cin >> t;
    while(t--)
    {
        int i,j;
        cin >> i >> j;
        result -= i;
        result += j;
        if(result > m)
        {
            m = result;
        }
    }

    cout << m;
    return 0;
}
