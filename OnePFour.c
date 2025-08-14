#include <stdio.h>
int main()
{

    int a[100], n, i, j, min, max;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d : ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max=a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min=a[i];
        }
    }
    printf("Greatest Element : %d ", max);
    printf("\nSmallest Element : %d ", min);
    return 0;
}
