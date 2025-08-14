

#include <stdio.h>
int main()
{
    int a[10], i, sum = 0, avg;
    printf("Enter 10 Array Elements : \n");
    for (i = 0; i < 10; i++)
    {
        printf("Number (%d) : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("\nSum: %d ", sum);
    avg = sum / 10;
    printf("\nAverage: %d ", avg);
    return 0;
}