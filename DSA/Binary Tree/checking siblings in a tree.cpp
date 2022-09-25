#include<bits/stdc++.h>
using namespace std;
struct Bstnode{
	int data;
	Bstnode *left;
	Bstnode *right;
};
int level=0;
Bstnode *GetNewNode(int data)
{
	Bstnode *newnode=new Bstnode();
	newnode->data=data;
	
	newnode->left=newnode->right=NULL;
	return newnode;
	
}
Bstnode *Insert(Bstnode *root,int data)
{
	if(root==NULL)
	{
		root=GetNewNode(data);
		
	}
	else if(data<=root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}



int isSibling(Bstnode *root, int a, int  b) 
{ 
    // Base case 
    if (root==NULL)  return 0; 
  
    return ((root->left->data==a && root->right->data==b)|| 
            (root->left->data==b && root->right->data==a)|| 
            isSibling(root->left, a, b)|| 
            isSibling(root->right, a, b)); 
} 
//int isSiblings(Bstnode *root,int a,int b)
//{
//	if(root==NULL)
//	{
//		return 0;
//	}
//	cout<<root->left->data<<" "<<root->right->data;
//	cout<<endl;
//	if((root->left->data==a&&root->right->data==b)||(root->left->data==b&&root->right->data==a)||isSiblings(root->left,a,b)||isSiblings(root->right,a,b))
//		return 1;
//		else 
//		return 0;
//}
int main()
{
	Bstnode *root=NULL;
	int n,a,i;
	cout<<"Enter no. of nodes you want = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	int x,y;
	cout<<"Enter two values to check if they are siblings or not\n ";
	cin>>x;
	cin>>y;
	
	int res=isSibling(root,x,y);
	if(res==1)
		cout<<"They are siblings";	
	else if(res==0)
		cout<<"they are not siblings";
}

