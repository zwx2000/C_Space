#ifndef BST_H
#define BST_H

typedef struct _bstNode
{
//    friend class BstNode;

//public:
    int data;
    _bstNode * LeftChild;
    _bstNode * RightChild;
    void display(int);
}BstNode;

class BST
{
// friend class BstNode;

public:
    BST();
    bool Insert(const int &);
    BstNode * Search(const int &);
    BstNode * Search(BstNode*, const int &);
    BstNode * IterSearch(const int &);
    void display();
    void Delete();
    void Delete(BstNode * cur);
    void PostOrder();
    void PostOrder(BstNode *);
    void PreOrder();
    void PreOrder(BstNode *);
    void InOrder();
    void InOrder(BstNode *);

private:
    BstNode * root;
};

#endif // BST_H
