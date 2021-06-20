#include <stdio.h>
#include <stdlib.h>

int main()
{
    int top=-1;
    int A[10];
    int ch,y,i;
    while(1)
    {
    printf("\nMENU OF OPERATIONS\n");
    printf("\n1 Push\n2 Pop\n3 Treaverse\n4 Exit");
    printf("\nEnter the choice:");
    scanf("%d",&ch);

    switch(ch)
     {
         case 1:
                printf("\nEnter the data:");
                scanf("%d",&y);
                if(top==9)
                {
                    printf("\nStack overflow");
                }
                else{
                top=top+1;
                A[top]=y;
                }

                 break;
         case 2:if(top==-1)
                   {
                       printf("\nStack underflow");
                   }
                   else
                   {
                       printf("\nThe element deleted is%d:",A[top]);
                       top=top-1;


                   }
                break;
         case 3:for(i=top;i>=0;i--)
                 {
                     printf("\nThe data is:%d",A[i]);

                 }
                break;
         case 4:exit(1);

     }
     }
    return 0;
}
