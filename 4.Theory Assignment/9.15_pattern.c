#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    int row = ceil(length / 2.0); // Calculate rows using ceil function

    printf("%d\n", row);
    for (int i = 1; i <= row; i++)
    {
        // print spaces
        for (int j = i; j < row; j++)
            printf("  ");
        
        // increasing part
        for (int col = i; col < i * 2 && col <= length; col++)
            printf("%2c", str[col - 1]);

        // decreasing part
        for (int col = i * 2 - 2; col >= i && col <= length; col--)
            printf("%2c", str[col - 1]);

        printf("\n");
    }
    return 0;
}
