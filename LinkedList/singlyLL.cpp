#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node *next;


    //constructor use in linked list
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor of the linked list
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Freed memory for.."<<value<<endl;
    }
};
//taken reference of head as &head since we do not want to make a copy
Node* InsertAtHead(Node* head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    return head;
}

//inserting at tail
Node* InsertAtTail(Node* tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
    return tail;
}
Node* InsertinMiddle(Node* tail, Node* head,int position, int d)
{
    if(position==1)
    {
        head = InsertAtHead(head,d);
        return head;
    }
    Node *temp = head;
    int count = 1;
    while(count<position-1)
    {
        temp = temp->next;
        count++;
    }

    //insert at tail
    if(temp->next==NULL)
    {
        tail = InsertAtTail(tail,d);
        return tail;
    }
    Node* Nodetoinsert = new Node(d);
    Nodetoinsert -> next = temp->next;
    temp->next = Nodetoinsert;
    return head;
}

//deletion using position
void Delete(Node* head, int position)
{
    //starting node
    if(position==1)
    {
        Node* temp = head;

        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        //middle or end node
        Node* curr = head;
        Node* prev = NULL; 

        int count = 1;
        while(count<position)
        {
        prev = curr;
        curr = curr->next;
        count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

//printing a LL
void print(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    //creating a new node
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl; //value at node
    // cout<<node1->next<<endl; //address of next node

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    //insertion at heads
    head = InsertAtHead(head,12);
    print(head);
    head = InsertAtHead(head,15);
    print(head);
    tail = InsertAtTail(tail,22);
    print(head);

    head = InsertinMiddle(tail,head,2,55);
    print(head);
    head = InsertinMiddle(tail,head,1,19);
    print(head);

    Delete(head,4);
    print(head);
    // Delete(head,1);
    // print(head);
    return 0;
}