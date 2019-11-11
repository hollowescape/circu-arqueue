#include<stdio.h>
#include<stdlib.h>
#define Max 10

typedef struct{
	int key;
}element;
typedef struct queue *queuepointer;
typedef struct queue{
	element data;
	queuepointer link;
}l;

queuepointer rear[Max],front[Max];


void add(int i,element item)
{
	queuepointer t=(queuepointer)malloc(sizeof(l));
	t->data=item;
	t->link=NULL;
	if(front[i])
	{
	rear[i]->link=t;
	rear[i]=t;
	}
	else
	{
		front[i]=t;
		rear[i]=t;
	}


}
element pop(int i)
{
	queuepointer t=front[i];
	element item;
	if(!t)
	{	printf(" queue is empty");
	}
	item=t->data;
	front[i]=t->link;
	free(t);
	
	return item;

}
void display(int i)
{	queuepointer t=front[i];int j=1;
	if(front[i]==NULL)
	{
		printf(" queue is empty\n");
		return;
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
		front[h]=NULL;
		rear[h]=NULL;
	}	
	while(1){
	printf(" enter the choice \n");
	printf(" 1. add \n 2.delete\n 3.display\n 4.exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf(" enter the element to be addded\n");
				scanf("%d",&p.key);
				printf(" enter the queue number in which is to be added");
				scanf("%d",&i);
				add(i,p);
				break;
		case 2: printf(" enter the number of queue to be del\n");
				scanf("%d",&i);
				q=pop(i);
				if(q.key==-1)
				{

				}
				else{
				printf(" element deleted from queue is %d",q.key);}
				break;
		case 3: printf(" enter the queue no to be dispayed\n");
				scanf("%d",&i);
				display(i);
				break;
		case 4: exit(0);
				break;
	}
}

}