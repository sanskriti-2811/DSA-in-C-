#include <iostream>
using namespace std;


//<<<<<<<<<<<<<<IMPLEMENTATION OD DLL>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
     // distructor
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
 //<<<<<<<<<<<LENGTH OF A NODE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  int length(Node* head){
    int len=0;
     Node* temp = head ;
    while(temp !=NULL){
       len++;
        temp=temp->next;
    }
    return len;
 }



    //  <<<<<<<<<<Traversal DDL>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  void print(Node* head ){
    Node * temp =head ;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
  }

//   <<<<<<<<<<<<<<<<<<<<<INSERTION AT HEAD >>>>>>>>>>>>>>>>>>>>>>>>>>>>
 void insertionHead(Node* &head ,Node* &tail, int d){

    if(head==NULL){
         Node* temp = new Node(d);
         head=temp;

    }
    else{
     Node* temp = new Node(d);
      temp->next=head;
      head->prev=temp;
    
      head =temp;}
 }

//  <<<<<<<<<<<<<<<<<<<<<INSERTION AT TAIL>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void insertionTail(Node* &tail ,Node* &head, int d){
    if(tail==NULL){
         Node* temp = new Node(d);
         tail=temp;

    }
    else{
    Node* temp =new Node(d);
    tail-> next=temp;
    temp-> prev =tail;

    tail=tail->next;}
}

// <<<<<<<<<<<<<<<<<INSERTION AT ANY POSITION>>>>>>>>>>>>>>>>>>>>>>>>>>>
 void insertionPos(Node* &tail,Node* &head ,int pos, int d){
     if (pos == 1)
    {
        insertionHead(head,tail, d);
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
        insertionTail(tail,tail, d);
        return;
    }

    Node *nodetoadd = new Node(d);

    nodetoadd->next = temp->next;
    temp->next ->prev= nodetoadd;
    temp->next=nodetoadd;
    nodetoadd->prev=temp;
 }


//  <<<<<<<<<<<<<<<<<<<<<DELETE A NODE >>>>>>>>>>>>>>>>>>>>>>>>>>>>
void deletion(int pos, Node *&head)
{

    // first node delete ..........
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev=NULL;
        head = temp->next;
        // memory free;
        temp->next= NULL;
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
        curr->prev=NULL;
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1= new Node(10);
    Node* head = node1;
    Node* tail =node1;
    //correction 
    //  Node* head = NULL;
    // Node* tail =NULL;
    print(head);
    cout << length(head) <<endl;

    // insertionHead(head,12);
    //  print(head);
    insertionTail( tail,head,12);
    print(head );
    insertionPos(tail,head,3,15);
    print(head);
    deletion(3,head);
    print(head);

}