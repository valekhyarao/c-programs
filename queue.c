#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
void isempty();
struct node
{
	int data;
	struct node *p;
}*s,*temp;
int r=-1,f=0;
int main()
{
	s=NULL;
	int i,j,k=1,ch,ele;
	while(k)
	{
		printf("\n1.push,\n2.pop\n3.display\n4.exit\n6.is empty\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter ele:");
				scanf("%d",&ele); 
				push(ele);
				break;
			case 2:
			pop();
			break;
			case 3:
			display();
			break;
			case 4:
			k=k-1;
			break;
		
			case 6:
isempty();
break;
			default:
			printf("enter correct choice");
			break; 
		}
		
	}
}
void push(int ele)
{
	if(s==NULL)
	{
	s=(struct node*)malloc(sizeof(struct node));
	s->data=ele;
	s->p=s;
	r=r+1;
   }
	else
	{
		struct node *temp2;
	temp=(struct node*)malloc(sizeof(struct node));
	temp2=s->p;
	s->p=temp;
	s=temp;
	temp->p=temp2;
	temp->data=ele;
	r=r+1;	
	}
	printf("insertion successfull");
}
void pop()
{
	if(s==NULL)
	{
		printf("q is empty");
	}
		else if(f==r)
		{
			printf("deletion successfull");
			r=-1;f=0;
			s=NULL;
		}
		else
		{
			temp=s->p;
			s->p=temp->p;
			free(temp);
			f=f-1;
		}
}
void display()
{
	if(f>r)
	printf("empty");
	else
	{
		temp=s->p;
		while(temp->p!=s->p)
		{
			printf("%d",temp->data);
			temp=temp->p;
		}
		printf("%d",temp->data);
	}
}
void isempty()
{
	if(f>r)
	printf("empty");
	else
	printf("not empty");
	
}
