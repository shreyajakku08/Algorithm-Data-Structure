
#include <stdio.h>
int main()
{
    int a[100], n, i, j, flag = 1;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                printf("\nFirst Repeated Element : %d", a[i]);
                flag = 0;
                break;
            }
        }
        if (flag ==0) {break;}
    }
    if (flag == 1)
    {
        printf("\nERROR ! No Repeated Element Found");
    }
    return 0;
}