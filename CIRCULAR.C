#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
  int data;
  node*next;
};
node*temp;
node*last=NULL;
node*ins;
int count=0;
void add()
{
  temp=(node*) malloc(sizeof(node));
  printf("\n Enter the vale:");
  scanf("%d",& temp->data);
  if(last==NULL)
  {
	 temp->next=temp;
  }
  else
  {
     temp->next=last->next;
     last->next=temp;
  }
  last=temp;
  count++;
  printf("\n value inserted..");
}
void disp()
{
  if(last==NULL)
  {
      printf("\n record not found");
  }
  else
  {
    do
    {
       temp=temp->next;
       printf("\n %d",temp->data);
    } while(temp!=last);
  }
}
void del()
{
}
void main()
{
   int ch;
   while(1)
   {
   clrscr();
   printf("\n 1) Add data");
   printf("\n 2) Display data");
   printf("\n 3) Delete data");
   printf("\n 4) Exit data");
   printf("\n 5) Count");
   printf("\n Enter your choice:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
	    add();
	    break;
    case 2:
	    disp();
	    break;
   case 3:
	    del();
	    break;
   case 4:
	    exit();
	    break;
   case 5:
	    printf("count=%d",count);
	    break;
   }
   getch();
}
}

