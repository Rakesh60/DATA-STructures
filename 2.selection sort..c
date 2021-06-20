#include<stdio.h>
void selection_sort(int *a,int n)
{
    int i,j,k,temp;
 for(i=0;i<=(n-2);i++)
    {
        k=i;
        for(j=(i+1);j<=(n-1);j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;

     }
}
int main()
{
    int a[10],n,i;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the array values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   selection_sort(a,n);
    printf("sorted in ascending order \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\nsorted in descending order \n");
    for(i=n-1;i>=0;i--)
            printf("%d\t",a[i]);
}
