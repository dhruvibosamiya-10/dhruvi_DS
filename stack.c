#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],tos=-1;
void add()
{
   if(tos<size-1)
   {
	 tos++;
	 printf("\n Enter value:");
	 scanf("%d",&x[tos]);
	 printf("\n\tvalue inserted succefull...!");
   }
   else
   {
	 printf("\n\tstack is full...!");
   }
}
void disp()
{
      if(tos==-1)
      {
	  printf("\n\t Record Not Found...!");
      }
      else
      {
	   int i;
	   for(i=0;i<=tos;i++)
	   {
		printf("\n\t%d):%d",i+1,x[i]);
	   }
      }
}
void del()
{
	      if(tos==-1)
	      {
		 printf("stack is empty...!");
	      }
	      else
	      {
		   printf("\n\t value %d is removed",x[tos]);
		   tos--;
	      }
}
void srch()
{
	  int src,i,flag=0;
	  printf("Enter search value:");
	  scanf("%d",&src);
	  for(i=0;i<size;i++)
	  {
	       printf("\n\t%d):%d",i+1,x[i]);
	       if(x[i]==src)
	       {
		   printf("\t<== value found at here");
		   flag=1;
	       }
	  }
	       if(flag==0)
	       {
		   printf("\n\t value not found...!");
	       }

}
void main()
{
     int ch;
     while(1)
     {
	     clrscr();
	     printf("1) Add Data");
	     printf("\n2) Display Data");
	     printf("\n3) Delete Data");
	     printf("\n4) Serch Data");
	     printf("\n5)  Exit");
	     printf("\n\tEnter your choice:");
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
			   srch();
			   break;
		   case 5:
			   exit();
			   break;
	     }
	     getch();
     }
}