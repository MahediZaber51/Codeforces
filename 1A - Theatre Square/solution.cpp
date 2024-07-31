#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long tn = ceil((double)(n) / a);
    long long tm = ceil((double)(m) / a);

    long long total = tn * tm;

    cout << total << endl;

    return 0;
}
