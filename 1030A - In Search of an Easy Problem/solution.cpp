#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,r=0;
    cin >> n;
    while(n--)
    {
        int i;
        cin >> i;
        if(i == 1)
        {
            r=1;
        }
    }
    if(r)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
    return 0;
}
