#include<stdio.h>
#include<stdlib.h>
#define MALLOC(p,s)\
	if(!((p)=malloc(s))){\
		printf(" insuffient memory");\
	}\

#define REALLOC(p,s)\
	if(!((p)=realloc((p),(s)))){\
		printf(" insuffient memory");\
	}\

	typedef struct 
	{
		int key;
	}element;
	
	element *stack ,*stack1,*stack2;

	
	int top=-1;
	int cp=1;
	void rall(element *s)
	{	
		REALLOC(s,cp*sizeof(element));
		cp=cp*2;
	}
	void push(element item,int n,int *top)
	{	//printf("%d",*top);
		int n;
		if(*top>=cp)
		{
			rall(stack);
			printf("hi");
		}		
			printf("%d",item.key);
			n=++*top;
			printf("%d",stack[n].key);
			if(item.key<stack[*top].key)
			{	printf("hi");
			}
			stack[*top]=item;
			printf("%d",*top);
		
	}

	element pop()
	{
		if(top==-1)
		{
			printf(" stack is empty");
			exit(0);
		}
		else
		{
			return stack[top--];
		}
	}

	void display(element *stack,int top)
	{	int i=0;
		for(i=0;i<=top;i++)
		{
			printf(" the element %d is %d",(i+1),stack[i].key);
		}
	}
	void main()
	{
		element d,p;
		int c,s;
		MALLOC(stack,sizeof(element));
		int n=0;
		//printf(" size of stack is %d",n);
		printf(" enter the choice \n");
		while(1)
		{
		printf(" 1. push\n 2. pop\n 3. display\n 4.exit\n");
		scanf("%d",&c);
			switch(c)
			{
				case 1: printf("enter the elment to insert\n");
						scanf("%d",&d.key);
						n=sizeof(int);
						push(d,n,&top);
						break;
				case 2: p=pop();
						printf(" element poped off is %d",p.key);
						break;
				case 3: display(stack,top);
						break;
				case 4: exit(0);
			}
		}
		free(stack);
	}		
