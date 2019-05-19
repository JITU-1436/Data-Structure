#include<stdio.h>
#include<stdlib.h>
struct node
{
	char data;
	struct node *next;
};

int main()
{
	struct node *head, *first, *temp,*swap = 0;
	int tmp,mc=0;
	int choice = 1,count=1;
	first = 0;
	while (choice)
	{
		head  = (struct node *)malloc(sizeof(struct node));

 		printf("Enter the data item\n");

 		scanf(" %c", &head->data );
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
		printf(" %c", temp->data);
		temp = temp -> next;
	}
	head = first;
	while(head!=0)
        {
                head = head->next;
		printf("count =%d\n",count);	
                count = count+1;
        }
	head = first;
        while(count>1)
        {
                while(head->next!=0)
                {
                        swap = head;
                        head=head->next;
                }
                if(first->data == head->data)
                {
			printf("matched\n");
                        swap->next = 0;
                        first = first->next;
                        head = first;
			mc++;
			if(mc == (count/2+1))
				printf("it is palindrome\n");

                }
                count = count-2;
		printf("count =%d\n",count);	
        }

}
