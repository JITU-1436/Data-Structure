#include<stdio.h>
#include<stdlib.h>
int count =1,num,i=0,bst_c=0;
struct node
{
	struct node *left,*right;
	int data,label;
};
struct node* createNode(struct node *root,int item)
{
	struct node *Node,*first=NULL;
	if(root == NULL)
	{
		printf("roor created\n");
		root = (struct node *)malloc(sizeof(struct node));
		root->data = item;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		printf("item is less tha root");
		if(item<root->data)
		{
			root->left = createNode(root->left, item);
		}
		else
			root->right = createNode(root->right,item);
	}
	
	return root;
}
void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d \t",p->data);
		preorder(p->left);
		preorder(p->right);
	}

}
void inorder(struct node *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d \t",p->data);
		inorder(p->right);
	}
}
int *a ;
int* Bst(struct node *p,int cost)
{

	a  =(int*)realloc(a,1);
	if(p!=NULL)
	{
		if(cost == p->data)
		{
			*(a+bst_c) = p->data;
			printf("%d th data == %d\n",bst_c,*(a+bst_c));
			num = bst_c;
			return a;
		}	
		if(cost < p->data)
		{	
			*(a+bst_c) = p->data;
			printf("%d th data == %d\n",bst_c,*(a+bst_c));
			bst_c++;
			Bst(p->left,cost);
		}
		else
		{
			*(a + bst_c) = p->data;
			printf("%d th data == %d\n",bst_c,*(a+bst_c));
			bst_c++;
			Bst(p->right,cost);
		}
	}
}
int main()
{
	struct node *p  = NULL;
	int data,pos,first,second,*a1,*b1,aray[100],n,first_num,second_num,j;
	a1  = (int*)malloc(sizeof(int) * 30);
	b1  = (int*)malloc(sizeof(int) * 30);
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the aray elements\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&aray[i]);
	}
	for(i = 0;i<n;i++)
	{
	
		p = createNode(p,aray[i]);
	}
	printf("pre order \n");
	preorder(p);
	printf("in order\n");
	inorder(p);
	printf("enter the first node\n");
	scanf("%d",&first);
	a1 = Bst(p,first);
	printf("first path is");
	for(i= 0;i<=num;i++)
	{
		aray[i] = *(a1+i);
	}
	first_num = num;
	printf("enter the second node\n");
	scanf("%d",&second);
	bst_c = 0;
	b1 = Bst(p,second);
	printf("second path is ");
	/*for(i= 0;i<=num;i++)
	{
		printf("%d==>",*(b1+i));
	}
	for(i= 0;i<=num;i++)
	{
		printf("%d ==>",aray[i]);
	}*/
	for(i=first_num;i>=0;i--)
	{
		for(j =0;j<=num;j++)
		{
			if(aray[i]== *(b1+j))
			{
				i = -1;
				second_num = j;
				j = num +1;
			}	
			else
			{
				if(j == num)
				{
					printf("%d==>",aray[i]);
				
				}
			}
		}
	}
	for(i = second_num;i<=num;i++)
	{
		printf("%d==>",*(b1+i));
	}

}
