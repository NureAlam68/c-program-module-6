// Given a number N. Print the digits of that number from right to left separated by space.

// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 109)
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }
    return 0;
}