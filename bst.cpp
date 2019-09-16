#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left,*right;
};
node* insert(node *root,int x)
{ 
//cin>>x;
if(root==NULL)
{
	root=new node;
root->data=x;}
else
{
	if(x>=root->data)
	root->right=insert(root->right,x);
	else
	root->left=insert(root->left,x);
}
return root;
}
 int inorder(node *root)
{
  if(root!=NULL)
  {
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
 }	
}
int main()
{
	node *root=NULL;
	int x,ch;
	while(1)
	{cin>>ch;
		if(ch==-1)
		break;
		else
		cin>>x;
		root=insert(root,x);
		}	
		inorder(root);
}
