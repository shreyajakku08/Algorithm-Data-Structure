#include <stdio.h>
int main()
{
  int i,j,n,a[100],temp;
  printf(""Enter Array Size : );
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("Number %d :",i);
      scanf("%d",&a[i]);
    }
  for(i=0;i,n-1;i++)
    {
    for(j=0;j<n-i-1;j++)
      {
        if (a[j]>a[j+1])
        {temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;}
      }
    }
  printf("Sorted Array :");
  for(i=0;i<n;i++)
    {
      printf("%d",a[i]);
    }
  return 0;
}
