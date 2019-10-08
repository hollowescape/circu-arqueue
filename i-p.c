#include<stdio.h>
#define MAX 100
#define exp 100

typedef enum{ lparen , rparen,plus,minus,times,divide,mod,eos,operand
}precedence;
int stack[100];
char exper[100];
int top=-1;
precedence gettoken(char *sy,int *n)
{
	*sy=exper[(*n)++];
	switch(*sy)
	{
		case '(':	return lparen;
					break;
		case ')':	return rparen;
					break;
		case '+':	return plus;
					break;
		case '-': 	return minus;
					break;
		case '/': 	return divide;
					break;
		case '*':	return times;
					break;
		case '%': 	return mod;
					break;
		case '\0':	return eos;
					break;
		default: return operand;
					break;

	}
}
void push(int m)
{
	if(top>=100)
	{
		printf(" stack full");
	}
	else
	{
		stack[++top]=m;
	}
}
int pop()
{
	if(top<=-1)
	{
		printf(" stack is empty");
	}
	else
	{
		return stack[top--];
	}
}
int eval()
{
	precedence token;
	char s;
	int op1,op2;
	int n=0;
	
	token= gettoken(&s,&n);
	while(token!=eos)
	{
		if(token==operand)
		{
			push(s-'0');
		}
		else{
			op2=pop();
			op1=pop();
			switch(token)
			{
				case plus:	push(op1+op2);
							break;
				case minus:	push(op1-op2);
							break;
				case times: push(op1*op2);
							break;
				case divide: push(op1/op2);
								break;
				case mod:	push(op1%op2);
							break;
			}
		}
		token= gettoken(&s,&n);
	}
	return pop();
}

void main()
{	int r;
	printf(" enter the expression\n");
	scanf("%s",exper);
	r=eval();
	printf("the result is %d\n",r);
}