#include <stdio.h>
#include <math.h>

int main()
{
    long long n, m, a;
    scanf("%lld %lld %lld",&n,&m,&a);

    long long tn = ceil((double)(n) / a);
    long long tm = ceil((double)(m) / a);

    long long total = tn * tm;
    printf("%lld",total);

    return 0;
}
