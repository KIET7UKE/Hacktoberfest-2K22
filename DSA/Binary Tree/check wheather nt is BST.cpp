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

int isBSTUtil(bstnode* node, int min, int max);  
  
/* Returns true if the given  
tree is a binary search tree  
(efficient version). */
int isBST(bstnode* node)  
{  
    return(isBSTUtil(node, INT_MIN, INT_MAX));  
}  
  
/* Returns true if the given 
tree is a BST and its values 
are >= min and <= max. */
int isBSTUtil(bstnode* node, int min, int max)  
{  
    /* an empty tree is BST */
    if (node==NULL)  
        return 1;  
              
    /* false if this node violates 
    the min/max constraint */
    if (node->data < min || node->data > max)  
        return 0;  
      
    /* otherwise check the subtrees recursively,  
    tightening the min or max constraint */
    return
        isBSTUtil(node->left, min, node->data-1) && // Allow only distinct values  
        isBSTUtil(node->right, node->data+1, max); // Allow only distinct values  
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
    if(isBST(root))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";  
          
    return 0;  
	
}
