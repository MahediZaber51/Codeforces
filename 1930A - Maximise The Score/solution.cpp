#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int* results = new int[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int* num = new int[2 * n];
        for (int j = 0; j < 2 * n; j++)
        {
            cin >> num[j];
        }
        sort(num, num + (2 * n));
        int m = 0;
        for (int j = 0; j < 2 * n; j += 2)
        {
            m += min(num[j], num[j + 1]);
        }
        results[i] = m;
    }
    for (int i = 0; i < t; i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}
