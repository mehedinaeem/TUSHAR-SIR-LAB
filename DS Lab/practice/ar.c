#include <stdio.h>
int main()
{
    int a[50], size, i, num, pos;
    printf("Enter the size of element : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Element of the array are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter the data you want to insert : ");
    scanf("%d", &num);
    printf("Enter position : ");
    scanf("%d", &pos);
    for (i = size - 1; i >= pos - 1; i--)

    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
    printf("%d\n", size);
    printf("Modified Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}