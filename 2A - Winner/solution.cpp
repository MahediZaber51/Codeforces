#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> name(n);
    vector<int> score(n);


    for (int i = 0; i < n; ++i)
    {
        cin >> name[i] >> score[i];
    }

    vector<string> names;
    vector<int> scores;

    for (int i = 0; i < n; ++i)
    {
        bool found = false;
        for (int j = 0; j < names.size(); ++j)
        {
            if (names[j] == name[i])
            {
                scores[j] += score[i];
                found = true;
                break;
            }
        }
        if (!found)
        {
            names.push_back(name[i]);
            scores.push_back(score[i]);
        }
    }


    int highest = INT_MIN;
    for (int i = 0; i < scores.size(); ++i)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        int current_score = 0;
        for (int j = 0; j <= i; ++j)
        {
            if (name[j] == name[i])
            {
                current_score += score[j];
            }
        }
        if (current_score >= highest)
        {
            int final_score = 0;
            for (int j = 0; j < n; ++j)
            {
                if (name[j] == name[i])
                {
                    final_score += score[j];
                }
            }
            if (final_score == highest)
            {
                cout << name[i] << endl;
                break;
            }
        }
    }

    return 0;
}
