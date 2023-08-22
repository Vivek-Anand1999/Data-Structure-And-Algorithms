#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data = 0);
    void setData(int data = 0);
    int getData();
    void setNext(Node *next);
    Node *getNext();
};

Node::Node(int data)
{
    setData(data);
    next = NULL;
}
void Node::setData(int data)
{
    this->data = data;
}
int Node::getData()
{
    return data;
}
void Node::setNext(Node *next)
{
    this->next = next;
}
Node *Node::getNext()
{
    return next;
}
void insertAtHead(int data, Node *&head)
{
    Node *n1 = new Node(data); //! a new Node is created in Heap
    n1->setNext(head); //? NewNode next will store head 
    head = n1; //! head will move to new node
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->getData() << "-->";
        temp = temp->getNext();
    }
    if(temp==NULL){
        cout<<"NULL";
    }
}

int main()
{
    Node *head = NULL;
    insertAtHead(10, head);
    insertAtHead(1, head);
    insertAtHead(5, head);
    //? Display the linked list using the head pointer
    cout << "Linked List: " << endl;
    display(head);

    //! Clean up memory by deleting nodes
    while (head != NULL)
    {
        Node *temp = head;
        head = head->getNext();
        delete temp;
    }

    return 0;
}

