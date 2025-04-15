// Given a number N, and N numbers, find maximum number in these N numbers.
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (mx < val)
        {
            mx = val;
        }
    }
    printf("%d", mx);
    return 0;
}