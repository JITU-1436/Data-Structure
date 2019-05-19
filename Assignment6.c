#include<stdio.h>
#include<stdlib.h>
void push(int,int);
void pop();
struct node
{
	int price;
	int index;
	struct node *next;
};
int j = 2;
struct node *head, *prev,*first, *temp,*swap = 0,*top =0;
int main()
{
	int tmp,count = 0;
	int choice;
	first = 0;	
	printf("Do you want to continue press 0 or 1?\n");
        scanf("%d", &choice);
	while (choice)
	{
		head  = (struct node *)malloc(sizeof(struct node));

 		printf("Enter the data item\n");

 		scanf("%d", &head->price );
		head->index = count;
		count++;
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
	int span,curr;
	printf("spam of 1st day is 1\n");
	temp =first;
//	printf("price =%d index %d\n",temp->price,temp->index);
	push(temp->price,temp->index);
	temp = temp->next;
	while(temp!=0)
	{
		curr = temp->price;
		if(curr<top->price)
		{
//			printf("price =%d index %d\n",temp->price,temp->index);
			span = temp->index - top->index;
			printf("span Of %dth %d\n",j,span);
			j++;
			push(curr,temp->index);
			temp = temp->next;
		}
		else
		{
			pop();
			if(top==0)
			{
				printf("span is = %d\n",temp->index+1);
				temp = temp->next;
			}
		}

	}

}
void push(int cost,int ind)
{
        struct node *p;
	//printf("top index = %d\n",ind);
        p =  (struct node *)malloc(sizeof(struct node));
        if(top ==0)
        {
                top = p;
                top->price = cost;
		top->index = ind;
                top->next = 0;
        }
        else
        {
                p->next = top;
                top = p;
                top->price = cost;
		top->index = ind;

        }
}

void  pop()
{
        swap = top;
        top=top->next;
        free(swap);
}

