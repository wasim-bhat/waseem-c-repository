//infix to postfix by waseem bhat without parenthesis...
#include<stdio.h>
#include<conio.h>
#include<strings.h>
void push(char);
char pop();
int precedence(char);
char stack[10];
int top=-1;
int i;
main()
{
	char exp[30],sym;
	puts("Enter any expression:");
	gets(exp);

	for(i=0;i<strlen(exp);i++)
	{
	if(exp[i]>64 && exp[i]<91 || exp[i]>96 && exp[i]<123)
		  printf("%c",exp[i]);
	else
		push(exp[i]);
	}
	
	while(top!=-1)
	{
		sym=pop();
		//if(sym!='(')
       		printf("%c",sym);
	}
	getch();
}
void push(char s)
{
	
	if(top==-1)
	{
		top++;
		stack[top]=s;	
		//display();
	}
	else
	{
		if(precedence(s)>precedence(stack[top]))
		{
		top++;
		stack[top]=s;
		//display();	
		}
		else
		{
			while(precedence(s)<=precedence(stack[top]))
			{
				
				printf("%c",pop());
				if(top==-1)
				break;
			}
			top++;
			stack[top]=s;
		}
	}
}
int precedence(char sym)
{

	if(sym=='^' )
	return 3;
	else if(sym=='*'||sym=='/'||sym=='%')
	return 2;
	else if(sym=='+'||sym=='-' || sym=='(')
	return 1;
	else
	return -1;
}
char pop()
{
	char s;
	s=stack[top];
	top--;
	return s;
	
}
void display()
{
	int t;
	t=top;
	printf("\nstack scenario\n");
	while(t!=-1)
	{
	printf("%c",stack[t]);
	t--;
	}
	printf("\n");
}
