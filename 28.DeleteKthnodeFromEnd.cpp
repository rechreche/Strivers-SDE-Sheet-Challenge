/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *curr=head;
    Node *tail=head;
    Node *prev=NULL;
    for(int i=0;i<K;i++)
    {
        if(tail == NULL)
        break;

        tail=tail->next;
    }
    while(tail != NULL)
    {
        prev=curr;
        curr=curr->next;
        tail=tail->next;
    }
    //if prev is still null it means we have to delete head
    if(prev==NULL)
    return head->next;
    prev->next=curr->next;
    delete curr;
    return head;
}
