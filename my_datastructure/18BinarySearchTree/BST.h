#ifndef BST_H
#define BST_H

#include <iostream>

//��дusing namespace std; ��Ϊ����ͷ�ļ���д��

enum Boolean {FALSE, TRUE};//��ͬ��C++�е�bool

template <class Type>
class Element
{
public:
    Type key;
    //Ϊ����Ӹ��������
};

template <class Type>
class BST;
//��ΪBST��BstNode����ʹ�õ�
//����BstNodeǰ��ǰ������ ����ᱨ��

template <class Type>
class BstNode  //���ڵ�
{
    friend class BST<Type>;
//private:
public:
    Element<Type> data; //�ڵ������
    BstNode* LeftChild; //���� �Һ���
    BstNode* RightChild;
    void display(int i);//��ʾ��ǰ�ڵ��Լ�������/������������
};

template <class Type>
class BST   // ���� ����
{
public:
    BST(BstNode<Type> *init = 0)//���캯��
    {
        root = init;
    }

    Boolean Insert(const Element<Type>& x);
    //��������

    //Ҫ���� Delete
    //Ҫ���� InOrder �������
    //       PreOrder
    //       PostOrder

    BstNode<Type>* Search(const Element<Type>&);
    //�����в���x������ҵ��˷���ָ��x��ָ�룬���򷵻ؿ�ָ��
    //���õݹ��㷨�������õ������������
    BstNode<Type>* Search(BstNode<Type>*, const Element<Type>&);

    BstNode<Type>* IterSearch(const Element<Type>&);
    //�������� ��ʹ�õݹ�

    void display()
    {
        std::cout << "\n";
        if(root)
            root->display(1);
        else
            std::cout << "����һ�ÿ���\n";
    }

private:
    BstNode<Type> *root;//����
};

template <class Type>
void BstNode<Type>::display(int i)
{
    std::cout << "Position: " << i << ", data.key =  " << data.key << "\n";//i�ǽڵ��λ��

    //�������������������ʾ
    if(LeftChild) LeftChild->display(2*i);     //�����ص�
    if(RightChild) RightChild->display(2*i+1); //����������λ�÷ֱ�Ϊ�ڵ�λ�õ�2i��2i+1
    //�����ı�Ŵ������� �������� ����+1
}

template <class Type>
Boolean BST<Type>::Insert(const Element<Type> &x)
{
    BstNode<Type> *p = root;//��ʼ�޸��ڵ㣬����ָ����ڵ�
    BstNode<Type> *q = 0;   //qָ��p�ĸ��ڵ�

    //insert֮ǰҪ����
    while(p)
    {
        q=p;//���޸�p֮ǰ��q���游�ڵ�

        //�ò��������������������������ݱȽ�
        if(x.key == p->data.key) return FALSE; //�����ظ���ʧ��
        if(x.key < p->data.key)
            p = p->LeftChild;  //С�ڷ����
        else
            p = p->RightChild; //���ڷ��ұ�
    }

    //�ҵ���λ�þ���q qΪ���ڵ� �ٽ�x��ֵ���������ڸ��ڵ�q������
    p = new BstNode<Type>;
    p->LeftChild = p->RightChild = 0; //�²���Ľڵ�û����/������������Ϊ0
    p->data = x;

    //���ӹ���
    //����ʼ���޸�����p��Ϊ��
    if(!root) root = p;
    else if(x.key < q->data.key) q->LeftChild = p;
    else q->RightChild = p;
    return TRUE;
}

//�ݹ���ҷ���
template <class Type>
BstNode<Type>* BST<Type>::Search(const Element<Type> &x)
{
    return Search(root,x);//�ݹ� �Ӹ���ʼ��
}

template <class Type>
BstNode<Type>* BST<Type>::Search(BstNode<Type> * b, const Element<Type> &x)
{
    if(!b) return 0;
    if(x.key == b->data.key) return b;
    if(x.key < b->data.key) return Search(b->LeftChild,x);
    return Search(b->RightChild,x);
}

//�������ҷ���
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
