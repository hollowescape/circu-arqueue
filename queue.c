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
	
	element *queue;
	int front =-1;
	int rear =-1;
	int cp=1;

	void rall(element *s)
	{
		REALLOC(s,cp*sizeof(element));
		cp*=2;
	}

	void insert(element item,int *rear)
	{	//printf("%d",*top);
		if(*rear>=cp)
		{
			rall(queue);
			printf("hi");
		}		
			queue[++*rear]=item;
			printf("%d",*rear);
		
	}

	element pop(int *front)
	{
		if(*front==rear)
		{
			printf(" stack is empty");
			exit(0);
		}
		else
		{	
			return queue[++*front];
		}
	}
	void display(element *queue,int rear,int front)
	{	int i=0;
		printf("%d %d",front,rear);
		for(i=front+1;i<=rear;i++)
		{
			printf(" the element %d is %d",(i+1),queue[i].key);
		}
	}
	void main()
	{
		element d,p;
		int c,s;
		MALLOC(queue,sizeof(element));
		int n=0;
		//printf(" size of stack is %d",n);
		printf(" enter the choice \n");
		while(1)
		{
		printf(" 1. insert\n 2. delete\n 3. display\n 4.exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf(" enter the element to insert\n");
					scanf("%d",&d.key);
					insert(d,&rear);
					break;
			case 2: p=pop(&front);
					printf(" element deleted from the queue is %d",p.key);
					break;
			case 3: display(queue,rear,front);
					break;
			case 4: exit(0);
					break;


		}
	}
	free(queue);
}		