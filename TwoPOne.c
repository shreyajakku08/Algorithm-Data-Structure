#include <stdio.h>
int main()
{
    int a[8] = {53, 36, 89, 57, 01, 00, 67}, i;
    int num;
    int flag = 0;
    printf("Enter Number to be Searched :");
    scanf("%d", &num);
    for (i = 0; i < 8; i++)
    {
        if (a[i] == num)
        {
            printf("Found at Index : %d ", i);
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        printf("Number not found");
    }
    return 0;
}