#include <stdio.h>
int main()
{
    int a[100];
    int n, i, j, k, key;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d : ", i);
        scanf("%d", &a[i]);
    }
     printf("\n");
    for (i = 1; i < n; ++i)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        printf("Pass %d -> ", i);
        printf("Key : %d\n", key);

    }
    printf("\nSorted Array :");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
