#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(){
        data=0;
        next=NULL;
    }
    Node(int d){
        this->data=d;
    }
};

class SingleLinkedList{
    Node* head;
    public:
    
    SingleLinkedList(){
        head=NULL;
    } 
        void insertLast(int);
        
        void printList();
        
        void deleteNode(int);
        
        int length();
        
        void insertFirst(int);
        
        void deleteAt(int);
        
        int searchNode(int);
    };


void SingleLinkedList::deleteNode(int node){
    
    Node *temp=head,*temp1=NULL;
    
    //No elements
    if(temp==NULL){
        std::cout << "List Empty" << std::endl;
    }
    //Only one element
    if(temp->data==node){
        head=head->next;
        delete temp;
        return;
    }
    //More than one element
    while(temp!=NULL){
        if(temp->next->data==node){
            
            temp1=temp->next;
            temp->next=temp1->next;
            delete temp1;
            return;
            
        }
        temp=temp->next;
    }
}

void SingleLinkedList::deleteAt(int i){
    Node* temp=head;
    Node* temp1;
    if(temp==NULL){
        cout<<"List Empty"<<endl;
        return;
    }
    int ci=0;
    if(ci==i){
        head=head->next;
        delete temp;
        return;
    }
    while(temp!=NULL){
        if(i+1==ci){
            temp1=temp->next;
            temp->next=temp1->next;
        delete temp1;
        return;
        }
        temp=temp->next;
    }
}
int SingleLinkedList::searchNode(int node){
    Node *temp=head;
    int c=0;
    while(temp!=NULL){
    if(temp->data==node){
        return c;
    }
    temp=temp->next;
    }
    return -1;
}
void SingleLinkedList::insertLast(int data){
    Node* node=new Node(data);
    Node* temp=head;
    if(head==NULL){
        head=node;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
}
void SingleLinkedList::insertFirst(int data){
    Node* node=new Node(data);
    node->next=head;
    head=node;
}

void SingleLinkedList::printList(){
    Node* temp=head;
    if(temp==NULL){
        cout<<"List Empty"<<endl;
        return;
    }
    cout<<"List elements are ";
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int SingleLinkedList::length(){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count+=1;
        temp=temp->next;
    }
    return count;
}

int main(){
    
    SingleLinkedList list;
    int option,ele,k;
    
    while(true){
        cout<<"\n1.Insert element at First\n2.Insert element at Last\n3.Delete specified element\n4.Delete element at specified index\n5.Print the List\n6.Length of the list\n7.Search an element\n8.Exit\nChoose your option:";
        cin>>option;
        switch(option){
            
            case 1:cout<<"Enter element to be inserted: ";
                   cin>>ele;
                   list.insertFirst(ele);
                   cout<<"Element inserted successfully"<<endl;
                   break;
            case 2:cout<<"Enter element to be inserted: ";
                   cin>>ele;
                   list.insertLast(ele);
                   cout<<"Element inserted successfully"<<endl;
                   break;
            case 3:cout<<"Enter element to be deleted:";
                   cin>>ele;
                   list.deleteNode(ele);
                   cout<<"Element deleted successfully"<<endl;
                   break;
            case 4:cout<<"Enter index to delete the element:";
                   cin>>ele;
                   list.deleteAt(ele);
                   cout<<"Element deleted successfully"<<endl;
                   break;
            case 5:list.printList();
                   break;
            case 6:cout<<"Length of the list is "<<list.length()<<endl;
                   break;
            case 7:cout<<"Enter element to be found";
                   cin>>ele;
                   k=list.searchNode(ele);
                   if(k!=-1){
                       cout<<ele<<" is the "<<k<<" th element in the list"<<endl;
                   }
                   else{
                       cout<<ele<<" not found in the list"<<endl;
                   }
                   break;
            case 8:exit(0);
        }
    }
    
   
    return 0;
}
