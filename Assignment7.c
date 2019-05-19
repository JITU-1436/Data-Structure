#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
struct node
{
	int data,index;
	struct node *next;
};
struct queue
{
        struct node *front, *rear;
};
struct queue *q = NULL;


struct node *head, *prev,*first, *temp,*swap = 0,*top = 0;
int value;

struct queue* createqueue()
{
        struct queue *q = (struct queue*)malloc(sizeof(struct queue));
        q->front = q->rear= NULL;
        return q;
}
void enqueue(struct queue *q,int value)
{
        struct node *p;
        p = (struct node *)malloc(sizeof(struct node));
        p->data = value;
        p->next = NULL;
        if(q->rear == NULL)
        {
                q->front = q->rear = p;
                return;
        }
        q->rear->next = p;
        q->rear = p;

}
void deque(struct queue *q)
{
        if(q->front==NULL)
                q->rear=NULL;
        q->front = q->front->next;
       
}

int main()
{
	int tmp,curr;
	int choice =1;
	first = NULL;	
	while (choice)
	{
		head  = (struct node *)malloc(sizeof(struct node));

 		printf("Enter the data item\n");

 		scanf("%d", &head->data );
		if (first != NULL)
		{
			temp->next = head;
			temp = head;
 		}
        	else
		{
            		first = temp = head;
       		}

	printf("Do you want to continue press 0 or 1?\n");
        scanf("%d", &choice);
	}
	temp->next = NULL;
	temp = first;
	while(temp!= NULL)
	{
		printf("%d==>",temp->data);
		temp = temp->next;

	}
	temp = first;
	int k;
	printf("enter the value of k\n");
	scanf("%d",&k);
	value =k;
	while(temp!=NULL)
	{
		curr = temp->data;
		if(q->rear== NULL && q->front== NULL)
		{
			enqueue(q,curr);
			printf("q->front->data%d\n",q->front->data);
		}
		else
		{
			if(curr>q->rear->data)
			{
				enqueue(q,curr);
			}
			else
			{
				deque(q);
			}
		}
		k--;
		if(k == 0)
		{
			printf("max is %d\n",q->front->data);
			k++;
		}
		temp = temp->next;
	}

}
