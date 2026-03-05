#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
   int x[size],i,j,temp;
   clrscr();
   for(i=0;i<size;i++)
   {
      printf("ente4r the value %d:",i+1);
      scanf("%d",&x[i]);
   }
   for(i=0;i<size;i++)
   {
       for(j=i+1;j<size;j++)
       {
	  if(x[i]>x[j])
	  {
	      temp=x[i];
	      x[i]=x[j];
	      x[j]=temp;
	  }
       }
   }
   for(i=0;i<size;i++)
   {
      printf("\n %d):%d",i+1,x[i]);
   }
   getch();
}