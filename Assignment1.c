#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head, *first, *temp,*swap = 0;
	int tmp;
	int choice = 1;
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
	temp = first;
	printf(" created  linked list is\n");
	while (temp != 0)
	{
		printf(" %d", temp->data);
		temp = temp -> next;
	}
	head = first;
	swap = head->next;
	while(head->next!=0 && swap->next!=0)
	{
		swap = head->next;
		printf("enter in while loop\n");
		tmp = head->data;
		head->data = head->next->data;
		head->next->data = tmp;
		if(swap->next!=0)
		head= head->next->next;
	}
	temp = first;
	printf(" created  linked list is\n");
	while (temp != 0)
	{
		printf("%d ", temp->data);
		temp = temp -> next;
	}
}
