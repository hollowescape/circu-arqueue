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
	stackpointer front[Max];
	stackpointer rear[Max];#include<stdio.h>
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
	stackpointer front[Max];
	stackpointer rear[Max];
void push(int i,element item)
{
	stackpointer temp=(stackpointer)malloc(sizeof(l));
			temp->data=item;
			temp->link=NULL;
			if(front[i])
			{
			rear[i]->link=temp;
			}
			else
			{
				front[i]=temp;
				}rear[i]=temp;
				
}
element pop(int i)
{	element k;
	if(front[i]==rear[i])
	{
		printf("  queue is empty\n");
	}
	else
	{
	front[i]=front[i]->link;
	k=front[i]->data;
	}
	return k;
}

void display(int i)
{	
	stackpointer temp=(stackpointer)malloc(sizeof(l));
	if(rear[i]==NULL)
	{
	printf(" no element to display\n");
	}
	else{
	temp=front[i];
	for(;temp!=rear[i];temp=temp->link)
	{
		printf("element at  is %d ",(temp->data).key);
		printf("\n");
	}
	}
}	
void main()
{	
	element d,p;
	int c,i;
	while(1)
	{
	printf(" enter the choice\n");
	printf(" 1. push \n 2.pop\n 3.display\n 4.exit");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf(" enter queue no in which you want to add\n");
			scanf("%d",&i);
			printf(" enter the element to be insterted\n");
			scanf("%d",&d.key);
			push(i,d);
			break;
		case 2: printf(" enter the queue no from you which want to delete\n");
			scanf("%d",&i);
			p=pop(i);
			printf(" the element deleted from queue is %d",p.key);
			break;
		case 3: printf(" enter the queue no \n");
			scanf("%d",&i);
			display(i);
			break;
		case 4: exit(0);
			break;
		}
	}
}	

void push(int i,element item)
{
	stackpointer temp=(stackpointer)malloc(sizeof(l));
			temp->data=item;
			temp->link=NULL;
			if(front[i])
			{
			rear[i]->link=temp;
			}
			else
			{
				front[i]=temp;
				}rear[i]=temp;
				
}
element pop(int i)
{	element k;
	if(front[i]==rear[i])
	{
		printf("  queue is empty\n");
	}
	else
	{
	front[i]=front[i]->link;
	k=front[i]->data;
	}
	return k;
}

void display(int i)
{	
	stackpointer temp=(stackpointer)malloc(sizeof(l));
	if(rear[i]==NULL)
	{
	printf(" no element to display\n");
	}
	else{
	temp=front[i];
	for(;temp!=rear[i];temp=temp->link)
	{
		printf("element at  is %d ",(temp->data).key);
		printf("\n");
	}
	}
}	
void main()
{	
	element d,p;
	int c,i;
	while(1)
	{
	printf(" enter the choice\n");
	printf(" 1. push \n 2.pop\n 3.display\n 4.exit");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf(" enter queue no in which you want to add\n");
			scanf("%d",&i);
			printf(" enter the element to be insterted\n");
			scanf("%d",&d.key);
			push(i,d);
			break;
		case 2: printf(" enter the queue no from you which want to delete\n");
			scanf("%d",&i);
			p=pop(i);
			printf(" the element deleted from queue is %d",p.key);
			break;
		case 3: printf(" enter the queue no \n");
			scanf("%d",&i);
			display(i);
			break;
		case 4: exit(0);
			break;
		}
	}
}	
