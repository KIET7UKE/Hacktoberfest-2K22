#include<bits/stdc++.h>
using namespace std;
struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;
};

bstnode *getnewnode(int data)
{
	bstnode *root;
	
		root=new bstnode();
		root->data=data;
	
	root->left=NULL;
	
	root->right=NULL;
	return root;
}
bstnode *Insert(bstnode *root,int data)
{
	if(root==NULL)
	{
		root=getnewnode(data);
		
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

bool IsBstUtil(bstnode *root,int min,int max)
{
	
		cout<<root->data<<" ";
	if(root==NULL)
	{
		return true;
	}
		
	if(root->data<min&&root->data>max&&IsBstUtil(root->left,min,root->data)&&IsBstUtil(root->right,root->data,max))
		{
			cout<<"hey";
		return true;	
		}
//	

		
}
int main()
{
	bstnode *root=NULL;
	int min = -std::numeric_limits<int>::max();
	//cout<<min;
	int max = std::numeric_limits<int>::max();
	//cout<<max;
	int i,j,n,a;
	cout<<"enter no. of nodes = ";
	cin>>n;
	
	cout<<"enter values of each nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	bool y=IsBstUtil(root,min,max);
	cout<<y<<endl;
	if(y)
	{
		cout<<"Binary search tree";
	}
	else
	{
		
		cout<<"Not Binary search tree";
	}
	return 0;
	
}
