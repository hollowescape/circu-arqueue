#include<stdio.h>
#define Max_size 100
#define Ex 100

int stack[Max_size];
char expr[Ex];
typedef enum{ lparen , rparen,plus,minus,times,divide,mod,eos,operand
}precendence;
 int top=0;
 int isp[]={0,19,12,12,13,13,13,0};
 int icp[]={20,19,12,12,13,13,13,0};

precendence gettoken(char *s, int *n)
{
	*s=expr[(*n)++];
	switch(*s)
	{
		case '(': return lparen;
		case ')': return rparen;
		case '+': return plus;
		case '-': return minus;
		case '*': return times;
		case '/': return divide;
		case '%': return mod;
		case '\0':return eos;
		default: return operand;

	}
}
char print_token(precendence token)
{
	switch(token)
	{
		case lparen: printf("(");
					 break;
		case rparen: printf(")");
					 break;
		case plus: printf("+");
					break;
		case minus: printf("-");
					break;	
		case times: printf("*");
					break;
		case divide: printf("/");
					break;
		case mod: printf(" %");
					break;
	}
}
void add(precendence token)
{
	if(top>100)
	{
		printf(" stack is full");
	}
	else
	{
		stack[++top]=token;
	}
}

precendence delete()
{
	if(top<-1)
	{
		printf(" stack is empty");
	}
	else
	{
		return stack[top--];
	}
}
void postfix(void)
{
	char sym;
	precendence token;
	int n=0;
	stack[0]=eos;
	for(token=gettoken(&sym,&n);token!=eos;token=gettoken(&sym,&n))
	{	
				if(token==operand)
					{
						printf("%c",sym);
					}	
				
			else if(token==rparen)
				{	
					while(stack[top]!=lparen)
					{
					print_token(delete(top));
					}
					delete(top);
				}
					
				else
				{
					while(isp[stack[top]]>=icp[token])
						print_token(delete(top));
					 add(token);
				}
	
}
	while((token=delete(top))!=eos)
	{
		print_token(token);
		printf("\n");
	}

}

void main()
{
	printf(" enter the infix string \n");
	scanf(" %s",expr);
	postfix();
}
