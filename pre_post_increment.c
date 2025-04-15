// post increment
// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = x++;
//     printf("%d %d", x, y);
//     return 0;
// }


// pre increment
// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = ++x;
//     printf("%d %d", x, y);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = x++;
//     int z = ++y;
//     printf("%d\n", z++);
//     printf("%d", z);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int x = 10;
    ++x;
    printf("%d", ++x);
    return 0;
}