#include<iostream>
using namespace std;

int main()
{
    int n,c;
    double r=0;

    cin >> n;
    c = n;
    while(n--)
    {
        int a;
        cin >> a;
        r += a;
    }
    r /= c;
    cout << r;
    return 0;
}
