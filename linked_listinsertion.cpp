#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

//constructor
    node(int d){
        data = d;
        next = NULL;
    }

};

//linked class(oop)
/*class LinkedList{
    node*head;
    node*tail;

    public:
    LinkedList(){

    }
    void insert(int d){

    } 
}*/

//functions(procedurAL PROGRAMMING)
void build(){

}
//passing a pointer by reference

void insertAtHead(node*&head,int d){
if(head==NULL){
    head = new node(d);
    return;
}
node *n = new node(d);
n->next = head;
head = n;
}

void print(node*head){

    while(head!=NULL){
        cout<<head->data<<" ->";
    head = head->next;
}
cout<<endl;

}
int length(node*head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;

    }
    return count;

}
void insertAtTail(node*&head,int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;

    }
    tail->next = new node(data);
    return;
}

void insertInMiddle(node*&head,int data,int p){

    //corner case 
    if(head==NULL or p==0){
        insertAtHead(head,data);
        return;
    }
    else if(p>length(head)){
insertAtTail(head,data);


    }
    else{
        //take p-1 jumps
        int jump = 1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        //create a new node
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;

    }
}

void deleteHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head->next;
delete head;
head = temp;
}
//search operation;
//linear search

bool search(node*head,int key){
    
    node*temp  = head;
    while(temp!=NULL){
        if(head->data==key){
           return true;

        }
        head = head->next;

    }
   return false;
}
 
//recursively 
bool searchRecursive(node*head,int key){


    if(head==NULL){
        return false;
    }
    //rec case check at head, remaining linked list
    if(head->data==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}




void deleteTail(node*&head){
  
    node*prev = NULL;
    node*temp = head;
    while(temp->next!=NULL){
        prev = temp;
        temp = temp->next;

    }
    delete temp;
    prev ->next = NULL;
    return;




}

node* take_input(){

  int d;
      cin>>d;


  node*head = NULL;

  while(d!=-1){
    insertAtHead(head,d);
    cin>>d;

  }
  return head;

}
ostream& operator<<(ostream &os, node*head){
 
    print(head);
    return os; //cout

}
istream& operator>>(istream &is,node*&head){
    head = take_input();
    return is; //cin

}

void reverse(node*&head)
{
    node* C =head;
    node* P =NULL;
    node*N;

    while(C!=NULL){
        //save the next node
        N=C->next;
        //make the current node point to prev
        C->next = P;

        //update P and C take them 1 step forward
        P=C;
        C=N;

    }
    head = P;
}

node* recReverse(node*head){
    //smallest linked list
    if(head->next==NULL or head==NULL){
        return head;

    }
    //rec case
    node* shead = recReverse(head->next);

    node* temp = shead;
    while(temp->next!=NULL){
        temp = temp->next;
    } 
    head->next = NULL;
    temp->next = head;
return shead;
}

node* midpoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;

    }

    node*slow = head;
    node*fast = head->next;

    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;

}

node* merge(node*a, node*b)
{
    //base case
    if(a==NULL){
        return b;

    }
    if(b==NULL)
    {
        return a;

    }
    //take a head pointer
    node*c;

    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);

    }
    else{
      c=b;
      c->next = merge(a,b->next);

    }
    return c;

}

node* mergeSort(node*head){
    //base case
    if(head==NULL or head->next==NULL){
        return head;

    }
    //rec case
    //1.break
    node*mid = midpoint(head);
    node*a = head;
    node*b = mid->next;
    mid->next=NULL;

    //2. rec sort the two parts
    a = mergeSort(a);
    b = mergeSort(b);

    //3. merge them
    node*c= merge(a,b);
    return c;

bool detectCycle(node*head){
    node*slow = head;
    node*fast = head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next ->next;
        slow = slow->next;

        if(fast==slow)
        {
            return true;
        }
        
    }
return false;

}

}


int main(){
    //node*head = take_input();
//node*head1;
node*head;

cin>>head;
//cout<<head<<head1;

head = mergeSort(head);
cout<<head<<endl;

//node* newHead = merge(head,head1);
//cout<<newHead<<endl;

//node* mid = midpoint(head);

//cout<<mid->data<<endl;


   // node*head = take_input();
   // node*head2=take_input();
//node*head;
//node*head2;
//cin>>head>>head2;
//cout<<head<<head2;

  //  cout<<head;//print entire linked list
    //print (head);
//cout<<head2;
//cout<<head<<head2;
   /*   node*head= take_input();
print(head);

  node*head = NULL;
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
insertAtHead(head,0);
print(head);
insertInMiddle(head,4,3);
insertAtTail(head,7);

print(head);
deleteHead(head);
print(head);

int key;
cin>>key;
if(searchRecursive(head,key)){
    cout<<"element found";
}
else{
cout<<"not found";
}
*/
}
