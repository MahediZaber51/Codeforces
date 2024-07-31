#include <iostream>
using namespace std;

int main()
{
    int r = 0, m[5][5], px, py;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j])
            {
                px = i;
                py = j;
            }
        }
    }
    for (int i = px; i != 2;)
    {
        if (i > 2)
        {
            i--;

        }
        else
        {
            i++;
        }
        r++;
    }
    for (int j = py; j != 2;)
    {
        if (j > 2)
        {
            j--;
        }
        else
        {
            j++;
        }
        r++;
    }

    cout << r << endl;

    return 0;
}
