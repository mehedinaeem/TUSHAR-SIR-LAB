#include <stdio.h>
int main()
{
    int start = 5, ptr = start, link[10] = {-2, 8, -2, -1, -2, 1, 9, -2, 6, 3};
    char info[10] = {' ', 'K', ' ', 'U', ' ', 'J', 'N', ' ', ' ', 'I'};
    int loc;
    char c = 'I';
    while (ptr != -1)
    {
        if (info[ptr] == c)
        {
            loc = ptr;
            break;
        }
        else
            ptr = link[ptr];
    }
    printf("%d", loc);
    return 0;
}