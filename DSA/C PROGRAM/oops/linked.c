#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *link;
}node;
node* insBeg(node *start, int ele)
{
	node *nn=(node*)malloc(sizeof(node));
	nn->data=ele;
	nn->link=start;
	start=nn;
	return start;
}
node* insEnd(node *start, int ele)
{
	node *nn,*t;
	nn=(node*)malloc(sizeof(node));
	nn->data=ele;
	if(start==NULL)
	{
		start=nn;
		nn->link=NULL;
	}
	else
	{
		t=start;
		while(t->link!=NULL)
			t=t->link;
		t->link=nn;
		nn->link=NULL;	
	}
	return start;
}
void traverse(node *start)
{
	node *t;
	if(start==NULL)
		printf("The linked list is empty");
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%d ",t->data);
			t=t->link;	
		}	
	}
}
node* delBeg(node *start)
{
	node *t;
	if(start==NULL)
	{
		printf("\nLL is empty. U cannot delete.\n");
	}
	else
	{
		printf("%d is deleted.\n",start->data);
		t=start;
		start=start->link;
		free(t);
	}
	return start;
}
node* delEnd(node *start)
{
	node *t;
	if(start==NULL)
	{
		printf("\nLL is empty. U cannot delete.\n");
	}
	else if(start->link==NULL)// Single node in LL
	{
		printf("%d is deleted.",start->data);
		free(start);
		start=NULL;	
	}
	else //LL contains more than 1 node
	{
		t=start;
		while(t->link->link!=NULL)
		{
			t=t->link;
		}
		printf("%d is deleted.\n",t->link->data);
		free(t->link);
		t->link=NULL;
	}
	return start;
}
int findMin(node *start)
{
	int min=0;
	node *t;
	if(start==NULL)
	{
		printf("LL is empty. You cant find the minimum.");
	}
	else
	{
		min=start->data;
		t=start;
		while(t!=NULL)
		{
			if(t->data<min)
				min=t->data;
			t=t->link;
		}
	}
	return min;
}
int searchElement(node *start,int se)
{
	node *t;
	if(start==NULL)
		return 0;   //element not found
	else
	{
		t=start;
		while(t!=NULL)
		{
			if(t->data==se)
				return 1;
			t=t->link;
		}
		return 0;
	}
}
int main()
{
	node *start=NULL;
	int ele,ch,se,s;
	do
	{
		printf("Enter ur choice.1.Ins at the Beg\n");
		printf("2.Ins at the End\n3.Traverse\n");
		printf("\n4.del from beg\n5.del from end\n6.exit\n");
		printf("7. Finding Minimum.\n");
		printf("8. Searching an element.\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element:");
				scanf("%d",&ele);
				start=insBeg(start,ele);
				break;
			case 2:
				printf("Enter the element:");
				scanf("%d",&ele);
				start=insEnd(start,ele);
				break;
			case 3:
				traverse(start);
				break;
			case 4:
				start=delBeg(start);
				break;
			case 5:
				start=delEnd(start);
				break;
			case 7:
				printf("The minimum element is:%d",findMin(start));
				break;
			case 8:
				printf("Enter the search element:");
				scanf("%d",&se);
				s=searchElement(start,se);
				if(s==0)
					printf("Element is not found.\n");
				else
					printf("Element is found.\n");
				break;
		}
	}while(ch!=6);
	return 0;
}