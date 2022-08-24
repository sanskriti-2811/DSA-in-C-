#include <iostream>
using namespace std;

// implementation
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // distructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
// insertion at head (Like=30,20,10...........)
void insertionHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at tail (like=10,20,30..............)

void insertionTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

// insertion at any postion .............................................
void insertionPos(Node *&tail, Node *&head, int pos, int d)
{

    if (pos == 1)
    {
        insertionHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertionTail(tail, d);
        return;
    }

    Node *nodetoadd = new Node(d);

    nodetoadd->next = temp->next;
    temp->next = nodetoadd;
}
// deletion of a node .......................................................
void deletion(int pos, Node *&head)
{

    // first node delete ..........
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any node ...............
        Node *curr = head;
        Node *pre = NULL;
        int count = 1;
        while (count < pos)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// traverse(>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>)
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(11);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    //  print(head);
    //  insertionHead(head ,12);
    print(head);
    insertionTail(tail, 12);
    print(head);
    insertionTail(tail, 72);
    print(head);
    // insertionTail(tail, 712);
    // print(head);
    // insertionTail(tail, 19);
    // print(head);

    insertionPos(tail, head, 4, 17);
    print(head);
    deletion(4, head);
    print(head);
}