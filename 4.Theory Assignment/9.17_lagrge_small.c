#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    char s[100];
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    int ar[n];
    char ara[n];
    
    for (int i = 0; i < n; i++)
    {

        scanf("%s", s);
        
        int j = 0;
        int length = 0;
        
        while (s[j] != '\0')
        {
            length++;
            j++;
        }
        
        ar[i] = length;
        ara[i]=s;
    }

    int max = INT_MIN;
    int min = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
    }

    //string compare
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
    }
    
    printf("Max length: %d\n", max);
    printf("Min length: %d\n", min);

    return 0;
}
