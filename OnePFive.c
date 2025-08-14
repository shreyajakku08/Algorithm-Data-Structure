#include <stdio.h>
int main()
{

    int a[100], n, i;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            a[i] = a[i] * a[i];
        }
    }
    printf("\nSquared Odd Positioned Elements : ");
    for (i = 0; i < n; i++)
    {
        printf("\nNumber %d : %d ", i, a[i]);
    }
    return 0;
}