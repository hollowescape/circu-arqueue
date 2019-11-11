#include<stdio.h>
#include<stdlib.h>
#define Max 10

typedef struct{
	int key;
}element;
typedef struct stack *stackpointer;
typedef struct stack{
	element data;
	stackpointer link;
}l;

stackpointer top[Max];


void add(int i,element item)
{
	stackpointer t=(stackpointer)malloc(sizeof(l));
	t->data=item;
	t->link=top[i];
	top[i]=t;


}
element pop(int i)
{
	stackpointer t=top[i];
	element item;
	if(top[i]==NULL)
	{
		printf(" stack is empty");
	   item.key=-1;
	   return item ;
	}
	else
		{item=t->data;
	top[i]=t->link;
	free(t);}
	return item;
}
void display(int i)
{	stackpointer t=top[i];int j=1;
	if(top[i]==NULL)
	{
		printf(" stack is empty\n");
		
	}
	for(;t;t=t->link)
	{	
		printf(" the element %d is %d\n",j,(t->data).key);
		j++;
	}
}

void main()
{
	element p,q;
	
	int n,i,h;
	for(h=0;h<10;h++)
	{
		top[h]=NULL;
	}	
	while(1){
	printf(" enter the choice \n");
	printf(" 1. add \n 2.delete\n 3.display\n 4.exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf(" enter the element to be addded\n");
				scanf("%d",&p.key);
				printf(" enter the stack number in which is to be added");
				scanf("%d",&i);
				add(i,p);
				break;
		case 2: printf(" enter the number of stack to be del\n");
				scanf("%d",&i);
				q=pop(i);
				if(q.key==-1)
				{

				}
				else{
				printf(" element deleted from stack is %d",q.key);}
				break;
		case 3: printf(" enter the stack no to be dispayed\n");
				scanf("%d",&i);
				display(i);
				break;
		case 4: exit(0);
				break;
	}
}

}