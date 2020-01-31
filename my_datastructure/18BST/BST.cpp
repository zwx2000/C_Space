#include <iostream>
#include "BST.h"

using namespace std;

void BstNode::display(int i)
{
    cout << "position: " << i << ", data = " << data << endl;

    if(LeftChild) LeftChild->display(2*i);
    if(RightChild) RightChild->display(2*i+1);
}

BST::BST()
{
    BstNode * init = 0;
    root = init;
}

bool BST::Insert(const int &x)
{
    BstNode * p = root;
    BstNode * q = 0;

    while(p)
    {
        q = p;
        if(p->data == x) return false;
        if(x < p->data)
            p = p->LeftChild;
        else
            p = p->RightChild;
    }

    p = new BstNode;
    p->data = x;
    p->LeftChild  = 0;
    p->RightChild = 0;

    if(!root) root = p;
    else if(x < q->data) q->LeftChild = p;
    else q->RightChild = p;

    return true;
}

BstNode * BST::Search(const int &x)
{
    return Search(root,x);
}

BstNode * BST::Search(BstNode*b, const int &x)
{
    if(!b) return 0;
    if(b->data==x) return b;
    else if(b->data > x) return Search(b->LeftChild,x);
    return Search(b->RightChild,x);
}

BstNode * BST::IterSearch(const int &x)
{
    for(BstNode*t = root; t; )
    {
        if(t->data==x) return t;
        else if(t->data > x) t = t->LeftChild;
        else t = t->RightChild;
    }
    return 0;
}

void BST::display()
{
    if(root)
        root->display(1);
    else
        cout << "this is an empty tree" << endl;
}

void BST::InOrder()
{
    InOrder(root);
}

void BST::InOrder(BstNode * cur)
{
    if(cur)
    {
        InOrder(cur->LeftChild);
        cout << cur->data << " ";
        InOrder(cur->RightChild);
    }
}

void BST::PostOrder()
{
    PostOrder(root);
}

void BST::PostOrder(BstNode * cur)
{
    if(cur)
    {
        PostOrder(cur->LeftChild);
        PostOrder(cur->RightChild);
        cout << cur->data << " ";
    }
}

void BST::PreOrder()
{
    PreOrder(root);
}

void BST::PreOrder(BstNode * cur)
{
    if(cur)
    {
        cout << cur->data << " ";
        PostOrder(cur->LeftChild);
        PostOrder(cur->RightChild);
    }
}

void BST::Delete()
{
    Delete(root);
}

void BST::Delete(BstNode * cur)
{
    if(cur)
    {
        BstNode * tmp = cur;
        Delete(cur->LeftChild);
        Delete(cur->RightChild);
        delete [] tmp;
    }
}
