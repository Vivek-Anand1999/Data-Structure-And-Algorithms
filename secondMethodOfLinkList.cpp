#include <iostream>
#include <climits>
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

void display(Node *head)
{
    int count = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        count++;

        cout << temp->getData() << "-->";
        temp = temp->getNext();
    }
    cout << "NULL" << endl;
    cout << "Size of Linklist is: " << count;
    cout << endl;
}

void creatingNode(Node *&head)
{
    Node *n1 = new Node(3);
    Node *n2 = new Node(6);
    Node *n3 = new Node(12);
    Node *n4 = new Node(14);
    Node *secondNode = new Node(10);
    Node *n8 = new Node(16);
    // head=n1;

    if (head == NULL)
    {
        head = n1;
        n1->setNext(n2);
        n2->setNext(secondNode);
        secondNode->setNext(n3);
        n3->setNext(n4);
        n4->setNext(n8);
    }
    else
    {
        n1->setNext(n2);
        n2->setNext(n3);
        n3->setNext(n4);
    }
}
void insertingNodedAtMidile()
{
    Node secondNode(88);
}
// int countNode(Node *head)
// {
//     Node*temp=head;
//     int count=0;
//     while(temp!=NULL){
//         temp=temp->getNext();
//         count++;
//     }
//     return count;
// }

//?
// int count(Node*head){
//     Node*temp=head;

//     if(temp==0){
//         return 0;
//     }
//     else{
//         return count(temp->getNext())+1;
//     }
//  }
//?
void sumOfAllElementInLinkList(Node *head)
{
    Node *temp = head;
    int sum = 0;
    while (temp != 0)
    {
        sum += temp->getData();
        temp = temp->getNext();
    }
    cout << endl;
    cout << "sum is: " << sum;
    cout << endl;
}
void findMax(Node *head)
{
    int greatestNumber = INT_MIN;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->getData() > greatestNumber)
        {
            greatestNumber = temp->getData();
        }
        temp = temp->getNext();
    }
    cout << "greatsetNumber in linklistis: " << greatestNumber;
    cout << endl;
}
int searchInLinklist(Node *&head)
{
    Node *temp = head;
    Node *FollowingPointer = NULL;
    int key;
    cout << "Enter the key that you want to searched: ";
    cin >> key;
    while (temp != NULL)
    {
        if (key == temp->getData())
        {
            FollowingPointer->setNext(temp->getNext());
            temp->setNext(head);
            head = temp;
            return 0;
        }
        else
        {
            FollowingPointer = temp;
            temp = temp->getNext();
        }
    }
}
void creatingNodeAtFirst(Node *&head)
{
    cout << "Node inserted at first: " << endl;
    Node *temp = new Node(102);
    temp->setNext(head);
    head = temp;
}
void identifyingTheLastNode(Node *head, Node *&last)
{
    last = head; // Initialize last to the head

    while (last != NULL && last->getNext() != NULL)
    {
        last = last->getNext(); // Traverse the list until the last node
    }
    // cout << last->getData();
}
void AddNodeAtLast(Node *&last, Node *&head)
{
    Node *newNode = new Node();
    newNode->setData(103);
    newNode->setNext(NULL);
    if (head == NULL)
    {
        head = last = newNode;
    }
    else
    {
        last->setNext(newNode);
        last = newNode;
    }
}
int puttingNodeInSortedOrder(Node* &head)
{
    Node *NewNode = new Node;
    NewNode->setData(8);
    Node *temp = new Node;
    Node *FlowerNode = new Node;
    temp = head;
    FlowerNode = NULL;
    while (temp != NULL)
    {
        if (temp->getData() > NewNode->getData())
        {
            FlowerNode->setNext(NewNode);
            NewNode->setNext(temp);
            return 0;
        }
        else
        {
            FlowerNode = temp;
            temp = temp->getNext();
        }
    }
}
int deleteANode(Node* &head){
    if(head==NULL){
        return ;
    }
    Node* temp=new Node;
    temp=head;
    head=head->getNext();
    delete temp;
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! --- MAIN Function ---- !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int main()  
{
    Node *head = NULL;
    Node *last = NULL;

    // creatingNode(head);
    // display(head);
    /*
 // int c;
    // c=countNode(head);
    // cout<<endl<<c;
    */

    // sumOfAllElementInLinkList(head);
    // findMax(head);
    // searchInLinklist(head);
    // display(head);
    // creatingNodeAtFirst(head);
    // display(head);
    // identifyingTheLastNode(head, last);

    // AddNodeAtLast(last, head);
    // display(head);
    // puttingNodeInSortedOrder(head);
    int c;
    c=deleteANode(head);
    cout<<c;
    // display(head);
    while (head != NULL)
    {
        Node *temp = head;
        head = head->getNext();
        delete temp;
    }

    return 0;
}
