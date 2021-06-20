#include <stdio.h>
#define max 8
void sort();
void merg();
int a[9] = { 19, 26, 27, 31, 33, 35, 42, 44, 2 };
int b[9];
int main()
{
   int i;
   printf("Array before sorting : ");
   for(i = 0; i <= max; i++)
      printf("\t%d", a[i]);
   sort(0, max);
   printf("\n\nArray after sorting\n");
   printf("\nSorted in ascending order : ");
   for(i = 0; i <= max; i++)
      printf("\t%d", a[i]);
      printf("\nSorted in descending order : ");
   for(i = max; i >= 0; i--)
      printf("\t%d", a[i]);
      printf("\n\n\n");
}
void sort(int low, int high)
{
   int mid;
   if(low < high)
        {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merg(low, mid, high);
   }
   else
   {
      return;
   }
}
void merg(int low, int mid, int high)
{
   int i,j,k;
   for(i = low, j = mid + 1, k = low; i <= mid && j <= high; k++) {
      if(a[i] <= a[j])
         b[k] = a[i++];
      else
         b[k] = a[j++];
   }
   while(i <= mid)
      b[k++] = a[i++];
   while(j <= high)
      b[k++] = a[j++];
   for(k = low; k <= high; k++)
      a[k] = b[k];
}
