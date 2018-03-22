#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int priority(char);
int push(char);
char pop();
static char str[50];

int top=-1;
void main()
{
	char a[30],post[30],ch;
	int i,j,l;
	printf("enter in exp");
	gets(a);
	l=strlen(a);
printf("%d\n",l);
	for(i=0,j=0;i<l;i++)
		if(isalpha(a[i]))
    post[j++]=a[i];
	else	
	{
		if(a[i]=='(')
push(a[i]);
else if(a[i]==')')
while((ch=pop())!='(')	
post[j++]=ch;
else
{
while(priority(a[i])<=priority(str[top]))
	post[j++]=pop();
push(a[i]);
}
}
while(top!=-1)
post[j++]=pop();
post[j]='\0';
printf("equivalent postfix exp is %s",post);
}

priority(char c)
{
	switch(c)
	{
		case '+':
		case '-':
				return 1;
		case '*':
		case '/':
				return 2;
        case '$':
		         return 3;
				 case '^':return 4;
			}
return 0;			
		}
		push(char c)
		{
			str[++top]=c;
		
		}
	char pop()
		{
		return str[top--];
	}
										 						
	
