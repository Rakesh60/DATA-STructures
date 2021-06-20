#include<stdio.h>
int main()
{
    int a[10],n,i,j,k;
    printf("enter the no of elements : ");
    scanf("%d",&n);
    printf("enter the array values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=1;i<=n-1;i++)
   {
       j=a[i];
       k=i;
       while(k>0&&a[k-1]>j)
       {
           a[k]=a[k-1];
           k=k-1;
       }
       a[k]=j;
   }
    printf("sorted in ascending order \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nsorted in descending order \n");
    for(i=n-1;i>=0;i--)
            printf("%d\t",a[i]);
}
