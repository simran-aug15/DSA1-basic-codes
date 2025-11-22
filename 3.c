#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* Createnode(int data)
{
    struct node* n=(struct node*)malloc (sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}
int insert(struct node* root,int key)
{
    struct node* prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            return 0;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct node*new=Createnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}
int main()
{
    struct node* p=Createnode(5);
    struct node* p1=Createnode(54);
    struct node* p2=Createnode(67);
    struct node* p3=Createnode(50);
    struct node* p4=Createnode(51);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    insert(p,7);
    printf("%d ",p->right->right);
    return 0;


}

