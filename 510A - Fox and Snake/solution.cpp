#include<iostream>
using namespace std;

int main()
{
    int a,b,g=0;
    cin >> a >> b;
    for(int i = 0; i <a; i++)
    {
        if(i %2!=0)
        {
            g = (g == 1)? 0:1;
        }

        for(int j = 0; j<b; j++)
        {
            if(i %2==0)
            {
                cout << '#';
            }
            else
            {
                if(g == 1 && j == b-1)
                {
                    cout << '#';
                    continue;
                }
                if(g == 0 && j == 0)
                {
                    cout << '#';
                    continue;
                }
                cout << '.';
            }
        }

        cout << endl;

    }
    return 0;
}
