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


int  transverse(Bstnode *root,int val)
{
	if(root!=NULL)
	{
		if(root->data==val)
		 return 1;
		 
		 if(transverse(root->left,val)||transverse(root->right,val))
		 {
		 	level++;
		 	return 1;
		 }
	}
	return 0;
}




int isSiblings(Bstnode *root,int a,int b)
{
	if(root==NULL)
	{
		return 0;
	}
	if((root->left->data==a&&root->right->data==b)||(root->left->data==b&&root->right->data==a)||isSiblings(root->left,a,b)||isSiblings(root->right,a,b))
		return 1;
	else return 0;
}
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
	int x,y,x1,x2;
	cout<<"Enter two values to check if they are siblings or not\n ";
	cin>>x;
	cin>>y;
	x1=transverse(root,x);
	x2=transverse(root,y);
	cout<<x1<<endl;
	cout<<x2<<endl;	
	int res=isSiblings(root,x,y);
	cout<<"hi"<<res<<endl;
	if(res==0&&x1==x2)
		cout<<"They are cousins";	
	else
		cout<<"they are not cousins";
}

