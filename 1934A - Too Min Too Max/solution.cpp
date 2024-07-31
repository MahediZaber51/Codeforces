#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> results(t);
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int* num = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> num[j];
        }
        sort(num, num + n);
        int m = 2 * (num[n - 1] - num[1]) + 2 * (num[n - 2] - num[0]);

        results[i] = m;
        delete[] num;
    }
    for (int i = 0; i < t; i++)
    {
        cout << results[i] << endl;
    }
    return 0;
}
