#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
  int data;
  node*next;
};
node*temp;
node*first=NULL;
node*last;
node*erase;
node*ins;
int count=0;
void add()
{
    temp=(node*)malloc(sizeof(node));
    printf("\n Enter value:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(first==NULL)
    {
      first=temp;
    }
    else
    {
      last->next=temp;
    }
    last=temp;
    count++;
    printf("\n value inserted successfully..");
}
void disp()
{
    if(first==NULL)
    {
	printf("\n record not found");
    }
    else
   {
      int sr=1;
      temp=first;
      while(temp!=NULL)
      {
	 printf("\n %d):%d",sr++,temp->data);
	 temp=temp->next;
      }
   }
}
void srch()
{
   if(first==NULL)
   {
      printf("\n record not found");
   }
      else
      {
      int sr=1,sv,flag=0;
      temp=first;
      printf("\n Enter value:");
      scanf("%d",&sv);
      while(temp!=NULL)
      {
	 printf("\n %d):%d",sr++,temp->data);
	 if(temp->data==sv)
	 {
	    printf("  => value found here");
	    flag=1;
	 }
	 temp=temp->next;
      }
      if(flag==0)
      printf("\n value %d not found",sv);
   }

}
void updt()
{
   if(first==NULL)
   {
      printf("\n record not found");
   }
   else
   {
       int uv,flag=0;
       disp();
       temp=first;
       printf("\n Enter value for update:");
       scanf("%d",&uv);
       while(temp!=NULL)
       {
	   if(temp->data==uv)
	   {
	       printf("\n Enter new value:");
	       scanf("%d",&temp->data);
	       flag=1;
	   }
	     temp=temp->next;
       }
       if(flag==0)
	 printf("\n Value %d not found",uv);
       else
	  printf("\n value updated..");
   }
}
void del()
{
    if(first==NULL)
    {
      printf("\n record not found");
    }
    else
    {
       int dv,flag=0;
       printf("\n enter value for delete:");
       scanf("%d",&dv);
       if(first->data==dv)
       {
	  erase=first;
	  first=first->next;
	  flag=1;
       }
       else
       {
	  temp=first;
	  while(temp!=NULL)
	  {
	     if(temp->next->data==dv)
	     {
		erase=temp->next;
		if(erase==last)
		{
		    last=temp;
		}
		temp->next=erase->next;
		flag=1;
	     }
	     temp=temp->next;
	  }
       }
       if(flag==0)
       {
	   printf("\n value %d not found",dv);
       }
       else
       {
	  free(erase);
	  printf("\n value deleted...");
	  count--;
       }
    }
}
void insrt()
{
   if(first==NULL)
   {
      add();
   }
   else
   {
       int pos;
       printf("\n enter position no:");
       scanf("%d",&pos);
       if(pos>count)
       {
	   add();
       }
       else
       {
	  ins=(node*)malloc(sizeof(node));
	  printf("\n enter value:");
	  scanf("%d",&ins->data);
	  printf("\n value inserted..");
	  count++;
	  if(pos==1)
	  {
	     ins->next=first;
	     first=ins;
	  }
	  else
	  {
	     int i=1;
	     temp=first;
	     while(i<pos-1)
	     {
		 temp=temp->next;
		 i++;
	     }
	      ins->next=temp->next;
	      temp->next=ins;
	  }
       }
   }
}
void main()
{
   int ch;
   while(1)
   {
   clrscr();
   printf("\n 1) Add data");
   printf("\n 2) Display data");
   printf("\n 3) Search data");
   printf("\n 4) Update data");
   printf("\n 5) Delete data");
   printf("\n 6) Insert data");
   printf("\n 7) Exit data");
   printf("\n 8) Count");
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
	    srch();
	    break;
    case 4:
	    updt();
	    break;
    case 5:
	    del();
	    break;
    case 6:
	    insrt();
	    break;
    case 7:
	    exit();
	    break;
   case 8:
	    printf("count=%d",count);
	    break;
   }
   getch();
}
}