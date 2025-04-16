// A number of two digits is lucky if one of its digits is divisible by the other.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = n / 10;
    int y = n % 10;
    if(x == 0 || y == 0)
    {
        printf("YES");
    }
    else if(x % y == 0 || y % x == 0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}