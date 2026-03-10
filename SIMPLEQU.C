#include<stdio.h>
#include<conio.h>
#define size 10
int x[size],front=0,rear=0;
void add()
{
   if(rear==size)
   {
       printf("Queue is full");
   }
   else
   {
      printf("\n enter value:");
      scanf("%d",&x[rear]);
      rear++;
      printf("\n value inserted..");
   }

}
void disp()
{
  if(rear==0)
  {
     printf("\n  Querue is empty..");
  }
  else
  {
    int i;
    for(i=0;i<rear;i++)
    {
       printf("\n %d",x[i]);
    }
  }
}
void del()
{
   if(rear==0)
   {
      printf("\n queue is empty");
   }
   else
   {
     printf("value %d is removed",x[front]);
     front++;
     if(front==rear)
     {
       front=0;
       rear=0;
     }
   }
}
void srch()
{
    int srch,flag=0,i;
    printf("\n enter srch value:");
    scanf("%d",&srch);
    for(i=0;i<size;i++)
    {
	printf("\n %d):%d",i+1,x[i]);
	if(x[i]==srch)
	{
	    printf("\n <==value found at here");
	    flag=1;
	}
    }
     if(flag==0)
     {
	printf("\n value not found..!");
     }
}

void main()
{
   int ch;
   while(ch)
   {
       clrscr();
       printf("\n1) add data:");
       printf("\n2) display data:");
       printf("\n3) remove data:");
       printf("\n4) srch data:");
       printf("\n5) exit");
       printf("\n enter your choice:");
       scanf("%d",&ch);
       printf("\n");
       switch (ch)
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
	      srch();
	      break;
       case 5:
	      exit();
       default:
	       printf("\n invalid choice..");
       }
       getch();
   }
}
