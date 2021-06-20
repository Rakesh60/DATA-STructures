#include<stdio.h>
void bubble_sort(int *A,int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if(A[j]>A[j+1])
        {
        temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;

        }
    }
    }
}
int main()
{
    int A[10],n,i,j,k,temp;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("\nEnter the array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    bubble_sort(A,n);
    printf("\nSorting in ascending order\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nSoring in descending order\n");
    for(i=n-1;i>=0;i--)
        printf("%d\t",A[i]);
    return 0;
}
