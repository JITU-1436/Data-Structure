#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head1, *first1, *temp1, *head2,*first2,*temp2,*first3,*head3,*temp3;
	int tmp;
	int choice = 1;
	first1 = 0,first3=0;
	while (choice)
	{
		head1  = (struct node *)malloc(sizeof(struct node));

 		printf("Enter the data item\n");

 		scanf("%d", &head1->data );
		if (first1 != 0)
		{
			temp1->next = head1;
			temp1 = head1;
 		}
        	else
		{
            		first1 = temp1 = head1;
       		}

	printf("Do you want to continue press 0 or 1?\n");
        scanf("%d", &choice);
	}
	temp1->next = 0;
	temp1 = first1;
	printf(" created first  linked list is\n");
	while (temp1 != 0)
	{
		printf("%d==>", temp1->data);
		temp1 = temp1 -> next;
	}
	first2 = 0;
	choice = 1;
	while (choice)
	{
		head2  = (struct node *)malloc(sizeof(struct node));

 		printf("Enter the data item\n");

 		scanf("%d", &head2->data );
		if (first2 != 0)
		{
			temp2->next = head2;
			temp2 = head2;
 		}
        	else
		{
            		first2 = temp2 = head2;
       		}

	printf("Do you want to continue press 0 or 1?\n");
        scanf("%d", &choice);
	}
	temp2->next = 0;
	temp2 = first2;
	printf(" created  second linked list is\n");
	while (temp2 != 0)
	{
		printf("%d==>", temp2->data);
		temp2 = temp2 -> next;
	}
	temp1 = first1;
	temp2 = first2;	
	while(temp1!=0 && temp2!=0)
	{
		if(temp1->data == temp2->data)
		{
			head3  = (struct node *)malloc(sizeof(struct node));
			if (first3 != 0)
               	 	{
				head3->data = temp1->data;
                        	temp3->next = head3;
                        	temp3 = head3;
                	}
                	else
                	{
				head3->data = temp1->data;
                        	first3 = temp3 = head3;
                	}
			temp3->next = 0;			
		}
		if(temp1->data > temp2->data)
		{
			temp2  = temp2->next;
		}
		else
		{
			temp1 = temp1->next;
		}
	}
	temp3 = first3;
	printf(" created first  linked list is\n");
	while(temp3!=0)
	{
		printf("%d==>", temp3->data);
                temp3 = temp3 -> next;

	}
}
