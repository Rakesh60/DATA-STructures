
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node *root,*s;
int len;
void append(void);
void addatbegin(void);
void addafternode(void);
int length(void);
void delet(void);
void display(void);
void reverse(struct node *);
void main()
{
    int ch;
    printf(" single linked lists\n\n\n");
    while(1)
    {
        printf("enter your choice \n\n");
        printf("1.insert at end\n");
        printf("2.insert at begin\n");
        printf("3.insert at mid\n");
        printf("4.length\n");
        printf("5.Delete\n");
        printf("6.Quit\n");
        printf("7.Display the nodes\n");
        printf("8.reverse the linked list\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: append();//add the node at the end of list
                    break;
            case 2: addatbegin();//
                    break;
            case 3: addafternode();
                    break;
            case 4: len=length();
                printf("the length of list is %d\n",len);
                break;
            case 5: delet();
                    break;
            case 6: exit(1);
                    break;
            case 7: display();
                    break;
            case 8: reverse(root);
            break;
            default : printf("please enter the valid choice\n");
        }
    }
}
void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data as integer number\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
        root=temp;
    else
    {
        struct node *p;
        p=root;
        while(p->link!=NULL)
        p=p->link;
        p->link=temp;
    }

}
int length()
{
    int count=0;
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void display()
{
    struct node *temp;
    temp=root;
    if(root==NULL)
        printf("there is no node in the list\n");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("\n\n");
}
void addatbegin()
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter the number\n");
  scanf("%d",&temp->data);
  temp->link=NULL;
  temp->link=root;
  root=temp;
}
void addafternode()
{
   struct node *temp,*p;
   int loc;
   printf("enter the location of node after which we have to add an another node\n");
   scanf("%d",&loc);
   if(loc>len)
    printf("you entered invalid location of node\nthe limited location of node is %d\n",len);
   else
   {
       p=root;
       temp=(struct node *)malloc(sizeof(struct node));
       printf("enter the number\n");
       scanf("%d",&temp->data);
       temp->link=NULL;
       int i=1;
       while(i<loc)
       {
           i++;
           p=p->link;

       }
       temp->link=p->link;
       p->link=temp;

   }
}
void delet()
{
  struct node *temp;
  int loc;
  printf("enter the location of node\n");
  scanf("%d",&loc);
  if(loc>len)
    printf("you entered invalid location\n");
  else
    if(loc==1)
  {
      temp=root;
      root=temp->link;
      temp->link=NULL;
      free(temp);
  }
     else
     {
         struct node *p=root,*q;
         int i=1;
         while(i<loc-1)
         {
             i++;
             p=p->link;
         }
         q=p->link;
         p->link=q->link;
         q->link=NULL;
         free(q);
     }
}
void reverse(struct node *fst)
{
    if(fst->link==NULL)
    {
        root=fst;
        s=fst;
        return;
    }
    reverse(fst->link);
    s->link=fst;
    s=fst;
    s->link=NULL;
}

