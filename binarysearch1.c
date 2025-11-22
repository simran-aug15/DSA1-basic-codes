#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* right;
    struct node* left;
};
struct node* Search( struct node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(root->data>key)
    {
        return Search(root->left,key);
    }
    else
    {
       return Search(root->right,key);
    }
}
struct node* Createnode(int data)
{
    struct node* n=(struct node*)malloc (sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
    
    struct node* p=Createnode(2);
    struct node* p1=Createnode(21);
    struct node* p2=Createnode(30);
    struct node* p3=Createnode(15);
    struct node* p4=Createnode(20);
    struct node* p5=Createnode(22);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    struct node* n=Search(p,22);
    if(n!=NULL)
    {
        printf("Found %d ",n->data);
    }
    else
    {
       printf("Element not found ");
    }

}