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

typedef struct{
	int key;
}element;

element *queue,*newqueue;
int r=0;
int f=0;
int cp=1;


	void rall(element *s)
	{
		REALLOC(s,cp*sizeof(element));
		cp*=2;
	}
void copy(element *i,element *j,element *nq)
{	
	int a=0;
	while(i<j)
	{
		nq[a]=*i;
		i++;
		a++;

	}
}



void addq(element item)
{
	if(f==(r+1)%cp)
	{
		MALLOC(newqueue,2*cp*sizeof(*queue));
	int s=(f+1)%cp;
	if(s<2)
	{
		copy(queue+s,queue+s+cp-1,newqueue);
	}
	else
	{
		copy(queue+s,queue+cp,newqueue);
		copy(queue,queue+r+1,newqueue+cp-s);

	}
	f=2*cp-1;
	r=cp-2;
	cp*=2;
	free(queue);
	queue=newqueue;		
		

	}
	
	r=(r+1)%cp;
		queue[r]=item;
		
}

element delq(int *f,int r)
{
	if(*f==r)
	printf(" queue is empty\n");
	*f=(*f+1)%cp;
	return queue[*f];
}
void display(element *q,int r,int f)
{	int i,k;
	for(i=(f+1)%cp,k=0;i!=(r+1)%cp;i=(i+1)%cp)
	{
		printf(" the element %d is %d ",k,queue[i].key);
		k++;
	}
}


void main()
{
	element d,p;
	int c;
	MALLOC(queue,sizeof(element));
	printf(" enter the choice \n");
		while(1)
		{ //printf(" %ld",sizeof());
		printf(" 1. insert\n 2. delete\n 3. display\n 4.exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf(" enter the element to insert\n");
					scanf("%d",&d.key);
					addq(d);
					break;
			case 2: p=delq(&f,r);
					printf(" element deleted from the queue is %d",p.key);
					break;
			case 3: display(queue,r,f);
					break;
			case 4: exit(0);
					break;


		}
	}
	free(queue);
}		

