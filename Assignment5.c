#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
struct node
{
	int data;
	struct node *next;
};

struct node *head, *prev,*first, *temp,*swap = 0,*top = 0;

int value;
int main()
{
	int tmp;
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
	int curr = first->data;
	push(curr);
	temp = first;
	temp = temp->next;
	while(temp!=0)
	{
			curr  = temp->data;
			if(curr>top->data)
			{
				value  = pop();
				printf("%d=============> %d\n",value,curr);
				if(top==0)
				{
					push(curr);
					temp = temp ->next;

				}
					
			}
			else
			{
				push(curr);
				temp = temp ->next;
			}
	}
	while(top!= 0)
	{
		value = pop();
		printf("%d=============> -1\n",value);

	}
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

