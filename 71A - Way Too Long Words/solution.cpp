#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> results;
    for (int i = 0; i < t; i++)
    {
        string w, m;
        cin >> w;
        if (w.length() > 10)
        {
            int l = w.length();
            m = w[0] + to_string(l - 2) + w[l - 1];
            results.push_back(m);
        }
        else
        {
            results.push_back(w);
        }
    }

    for (int i = 0; i < (int)results.size(); i++)
    {
        cout << results[i] << endl;
    }
    return 0;
}
