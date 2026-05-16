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

int main()
{
    Treenode* T1 = new Treenode(1);

    T1->Left = new Treenode(2);
    T1->Right = new Treenode(3);

    cout << T1->data << " "<< T1->Left->data << " "<< T1->Right->data << endl;

    return 0;
}