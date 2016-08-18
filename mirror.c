#include<stdio.h>
struct node{
int data;
struct node*right;
struct node*left;
};
struct node* root=NULL;
struct node*insert(struct node*root,int data)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
if(root==NULL)
{
root=temp;
}
else if(data<temp->data)
{
root->left=insert(temp->left,data);
}
else if(data>=root->data)
{
root->right=insert(temp->right,data);
}
return root;
}
struct node*mirror(struct node*root)
{
 struct node *temp;

   if (root==NULL) 
   { 
     return; 
   } 
   else 
   { 
      mirror(root->left); 
      mirror(root->right); 
      temp = root->left; 
      root->left = root->right; 
      root->right = temp; 
   } 
}
 void preorder(struct node *root) {
 if (root) {
 printf("%d\n",root->data);
preorder(root->left);
 preorder(root->right);
 }
 }
int main()
{
int i,n,num;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num);
insert(root,num);
}
preorder(root);
mirror(root);
preorder(root);
return 0;
}



