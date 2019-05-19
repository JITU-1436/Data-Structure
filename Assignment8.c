#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
struct node
{
	int data;
	struct node *next;
};

struct queue
{
	struct node *front, *rear;
};
struct node *head, *prev,*first, *temp,*swap = 0,*top = 0;

int value;

struct queue* createqueue()
{
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	q->front = q->rear= 0;
	return q;
}
void enqueue(struct queue *q,int value)
{
        struct node *p;
        p = (struct node *)malloc(sizeof(struct node));
        p->data = value;
        p->next = 0;
        if(q->rear == 0)
        {
                q->front = q->rear = p;
                return;
        }
        q->rear->next = p;
        q->rear = p;

}
int deque(struct queue *q)
{
	if(q==0)
		return 0;
	if(q->front==0)
		q->rear=0;
	value = q->front->data;
	q->front = q->front->next;
	return value;
}
void push(int curr)
{
        struct node *p;
        p =  (struct node *)malloc(sizeof(struct node));
        if(top ==0)
        {
                top = p;
                top->data = curr;
                top->next = 0;
        }
        else
        {
                p->next = top;
                top = p;
                top->data = curr;

        }
}
int pop()
{
        value = top->data;
        swap = top;
        top=top->next;
        free(swap);
        return value;
}


int main()
{
	int tmp,k;
	int choice =1;
	first = 0;	
	while (choice)
	{
		head  = (struct node *)malloc(sizeof(struct node));

 		printf("Enter the data item\n");

 		scanf("%d", &head->data );
		if (first != 0)
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
	temp->next = 0;
	temp =first;
	struct queue *q = createqueue();
	while(temp)
	{
		int value = temp->data;
		enqueue(q,value);
		temp = temp->next;
	}
	printf("enter the value of k\n");
	scanf("%d",&k);
	tmp = k;
	printf("tmp = %d",tmp);
	while(tmp>0)
	{
		value = deque(q);
		
		printf("value =%d",value);
		push(value);
		tmp--;
	}
	tmp = k;
	while(top!=0)
	{
		int ddata;
		ddata  = pop();
		enqueue(q,ddata);
	}
	while(tmp>0)
	{
		int ddata;
		ddata = deque(q);
		enqueue(q,ddata);
		tmp--;
	}
	temp = first;
	while(temp!=0)
	{
		value = deque(q);
		printf("%d === >",value);
		temp = temp->next;
	}
/*	while(q->front!=0)
	{
		printf("data -=---> %d",q->front->data);
	}*/
}
