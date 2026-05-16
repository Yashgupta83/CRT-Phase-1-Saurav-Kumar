#include<iostream>
using namespace std;

class Treenode
{
public:
    int data;
    Treenode* Left;
    Treenode* Right;

    Treenode(int x)
    {
        data = x;
        Left = Right = NULL;
    }
};

void show(Treenode* root)
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << endl;

    show(root->Left);
    show(root->Right);
}

int main()
{
    Treenode* T1 = new Treenode(1);

    T1->Left = new Treenode(2);
    T1->Right = new Treenode(3);

    show(T1);

    return 0;
}