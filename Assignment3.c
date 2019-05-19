#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head, *prev,*first, *temp,*swap = 0;
	int tmp;
	int choice;
	first = 0;	
	printf("Do you want to continue press 0 or 1?\n");
        scanf("%d", &choice);
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
	while(temp!=0)
	{
		prev = temp;
		head  = temp->next;
		while(head!=0)
		{
			if(temp->data == head->data)
			{
				printf("%d==>", temp->data);
				prev->next = head->next;
			
			}
			else
			{
				prev = prev->next;
			}
				head = head->next;
		}
		temp = temp->next;
	}
	
	temp = first;
	printf(" created  linked list is\n");
	while (temp != 0)
	{
		printf("%d==>", temp->data);
		temp = temp -> next;
	}
}
