#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    node* n1 = new node(1);
    node* n2 = new node(2);
    node* n3 = new node(3);
    node* n4 = new node(4);
    node* n5 = new node(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

     node* temp = n1;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}