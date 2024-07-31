#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if ((a+b > c && b+c > a && c+a > b) || (a+b > d && b+d > a && d+a > b) || (a+c > d && c+d > a && d+a > c) || (b+c > d && c+d > b && d+b > c))
    {
        printf("TRIANGLE");
    }
    else if(a+b == c || b+c == a || c+a == b || a+b == d || b+d == a || d+a == b || a+c == d || c+d == a || d+a == c || b+c == d || c+d == b || d+b == c)
    {
        printf("SEGMENT");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
    return 0;
}
