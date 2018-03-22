#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
void peek();
void isempty();
void count();
struct node
{
	int data;
	struct node *p;
}*s,*temp;
int top=-1;
void main()
{
	s=NULL;
	int i,j,k=1,ch,ele;
	while(k)
	{
		printf("\n1.push,\n2.pop\n3.display\n4.exit\n5.count\n6.is empty\n6.peek\nenter choice:");
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
			case 5:
				count()
;
break;
case 6:
isempty();
break;
case 7:
peek();
break;			default:
			printf("enter correct choice");
			break; 
		}
		
	}
}
void push(int ele)
{
	struct node *temp;
	if(top==-1)
	{
		s=(struct node*)malloc(sizeof(struct node));
		s->data=ele;
		s->p=s;
		top=top+1;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=ele;
		temp->p=s->p;
		s->p=temp;
		top=top+1;
	}
}
void pop()
{
	struct node *temp;
	if(top==-1)
	{
		printf("it is empty");
	}
	else if(s->p==s)
	{
		s=NULL;
		printf("deletion successful");
		top=-1;
	}
	else
	{
		temp=s->p;
		s->p=temp->p;
		free(temp);
		top=top-1;
		printf("deletion successfull");
	}
	
}
void display()
{
	struct node *temp;
		if(top==-1)
	{
		printf("it is empty");
	}
	else
	{
		temp=s->p;
		while(temp->p!=s->p)
		{
			printf("\t%d",temp->data);
		temp=temp->p;
		}
		printf("\t%d",temp->data);
			}
}
void count()
{
	printf("count is %d",top+1);
}
void isempty()
{
	if(top==-1)
	printf("stack is emp");
	else
	printf("stack is not empty");
}
void peek()
{
	if(top==-1)
	printf("stack is emp");
	else
	printf("%d",s->p->data);
}
