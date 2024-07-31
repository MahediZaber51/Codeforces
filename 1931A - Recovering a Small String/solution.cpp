#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> data;
    int temp, t, a, b, c;
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                         'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                         's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
                        };
    cin >> temp;
    for (; temp > 0; temp--)
    {
        cin >> t;
        data.push_back(t);
    }

    for (size_t temps = 0; temps < data.size(); ++temps)
    {
        for (a = 0; a < 26; ++a)
        {
            for (b = 0; b < 26; ++b)
            {
                for (c = 0; c < 26; ++c)
                {
                    if (a + b + c + 3 == data[temps] && ((a != b && a < b) || (a == b)))
                    {
                        cout << alphabet[a] << alphabet[b] << alphabet[c] << endl;
                        goto end_loop;
                    }
                }
            }
        }
end_loop:
        continue;
    }

    return 0;
}
