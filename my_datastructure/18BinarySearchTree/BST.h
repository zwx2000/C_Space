#ifndef BST_H
#define BST_H

#include <iostream>

//不写using namespace std; 因为是在头文件里写的

enum Boolean {FALSE, TRUE};//等同于C++中的bool

template <class Type>
class Element
{
public:
    Type key;
    //为了添加更多的数据
};

template <class Type>
class BST;
//因为BST在BstNode类中使用到
//需在BstNode前有前置声明 否则会报错

template <class Type>
class BstNode  //树节点
{
    friend class BST<Type>;
//private:
public:
    Element<Type> data; //节点的数据
    BstNode* LeftChild; //左孩子 右孩子
    BstNode* RightChild;
    void display(int i);//显示当前节点以及他的左/右子树的数据
};

template <class Type>
class BST   // 插入 查找
{
public:
    BST(BstNode<Type> *init = 0)//构造函数
    {
        root = init;
    }

    Boolean Insert(const Element<Type>& x);
    //插入数据

    //要增加 Delete
    //要增加 InOrder 中序遍历
    //       PreOrder
    //       PostOrder

    BstNode<Type>* Search(const Element<Type>&);
    //在树中查找x，如果找到了返回指向x的指针，否则返回空指针
    //利用递归算法，所以用到下面这个函数
    BstNode<Type>* Search(BstNode<Type>*, const Element<Type>&);

    BstNode<Type>* IterSearch(const Element<Type>&);
    //迭代查找 不使用递归

    void display()
    {
        std::cout << "\n";
        if(root)
            root->display(1);
        else
            std::cout << "这是一棵空树\n";
    }

private:
    BstNode<Type> *root;//树根
};

template <class Type>
void BstNode<Type>::display(int i)
{
    std::cout << "Position: " << i << ", data.key =  " << data.key << "\n";//i是节点的位置

    //存在左右子树则继续显示
    if(LeftChild) LeftChild->display(2*i);     //树的特点
    if(RightChild) RightChild->display(2*i+1); //左右子树的位置分别为节点位置的2i和2i+1
    //树结点的标号从上至下 从左至右 依次+1
}

template <class Type>
Boolean BST<Type>::Insert(const Element<Type> &x)
{
    BstNode<Type> *p = root;//开始无父节点，所以指向根节点
    BstNode<Type> *q = 0;   //q指向p的父节点

    //insert之前要查找
    while(p)
    {
        q=p;//在修改p之前用q保存父节点

        //让插入的数据与根和左右子树的数据比较
        if(x.key == p->data.key) return FALSE; //发生重复，失败
        if(x.key < p->data.key)
            p = p->LeftChild;  //小于放左边
        else
            p = p->RightChild; //大于放右边
    }

    //找到的位置就是q q为父节点 再将x的值考虑连接在父节点q的子树
    p = new BstNode<Type>;
    p->LeftChild = p->RightChild = 0; //新插入的节点没有左/右子树，所以为0
    p->data = x;

    //连接过程
    //若开始便无根，则将p设为根
    if(!root) root = p;
    else if(x.key < q->data.key) q->LeftChild = p;
    else q->RightChild = p;
    return TRUE;
}

//递归查找方法
template <class Type>
BstNode<Type>* BST<Type>::Search(const Element<Type> &x)
{
    return Search(root,x);//递归 从根开始找
}

template <class Type>
BstNode<Type>* BST<Type>::Search(BstNode<Type> * b, const Element<Type> &x)
{
    if(!b) return 0;
    if(x.key == b->data.key) return b;
    if(x.key < b->data.key) return Search(b->LeftChild,x);
    return Search(b->RightChild,x);
}

//迭代查找方法
template <class Type>
BstNode<Type>* BST<Type>::IterSearch(const Element<Type> &x)
{
    for(BstNode<Type>* t=root; t; )
    {
        if(x.key == t->data.key) return t;
        if(x.key < t->data.key)
            t = t->LeftChild;
        else
            t = t->RightChild;
    }
    return 0;
}

#endif // BST_H
