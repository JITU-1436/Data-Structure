#include<stdio.h>
#include<stdlib.h>
int count =1,n,lc = 0,pc =0;
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
void assign_label(struct node *node)
{
	if(node!=NULL)
	{
		node->label = lc;
		lc++;
		assign_label(node->left);
	
		assign_label(node->right);
		lc--;
	}
}

/*void inorder(struct node *p)
{
        if(p!=NULL)
        {
                inorder(p->left);
                printf("%d\t label =%d\n",p->data,p->label);
                inorder(p->right);
        }
}*/

int Bst(struct node *p,int cost)
{
        if(p!=NULL)
        {
                if(p->left!=NULL && cost == p->left->data)
		{
			if(p->right ==NULL)
				pc++;

                        return p->label+1;
		}
		if(p->right!=NULL && cost == p->right->data)
		{
			if(p->left==NULL)
				pc++;
			return p->label+1;
		}
                if(cost < p->data)
                {
                        count++;
                        Bst(p->left,cost);
                }
                else
                {
                        count++;
                        Bst(p->right,cost);
                }
        }
}
void inorder_print(struct node *p,int caus_label)
{
	if(p!=NULL)
        {
                inorder_print(p->left,caus_label);
		if(p->label == caus_label)		
		{
			if(pc>1)
			{
                		printf("%d\t label =%d\n",p->data,p->label);
			}
			pc++;
		}
	
                inorder_print(p->right,caus_label);
        }

}
int main()
{
	struct node *p  = NULL;
	int data,pos,check,a[100],i,caus,caus_label;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the aray elements\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++)
	{
	
		p = createNode(p,a[i]);
	}
	assign_label(p);
	printf("enter the node ");
	scanf("%d",&caus);
	caus_label = Bst(p,caus);
	printf("caus label of give data+ %d\n",caus_label);
//	inorder(p);
	inorder_print(p,caus_label);
	
}
