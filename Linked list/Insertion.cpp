
#include <iostream>
using namespace std;
#include <map>



class node{
    public:
    int data;
    node  * next;

node(int d){
    data = d;
    next = NULL;
}

};
 void InsertAthead(int data , node * &head){

//create 
node * newnode = new node(data);
newnode->next = head;
head = newnode;




}
void  InsertAtTail( int data ,node * head , node* tail ){
    
    // create new node
    node * newnode = new node (data);
    tail->next = newnode;
    tail = newnode;

}


void print ( node * &head){
    node * temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void deleteNode(int pos, node* &head){
    node* temp = head;
    node* prev = nullptr;
    int count = 0;

    while (temp != nullptr && count < pos) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        return; // Position is beyond the length of the list, nothing to delete
    }

    prev->next = temp->next;
    delete temp;
}



//FUNCTION TO DETECT A LOOP



bool DetectLoop ( node * head){
   map<node*, bool>mp;

if(head==NULL){
    return false;
}
else {
  node * temp = head;
    while(temp->next!=nullptr){
        //vsisted
        if(mp[temp]==true){
            return true;
        }
        else{
            mp[temp]=true;
            temp = temp->next;
        }



        //not visited



    }
    return false;
   
}

  

}




node * FloydCycleDetection( node * head){


node* slow = head;
node * fast = head;
while(fast->next!=nullptr || slow->next!=nullptr || fast!= nullptr ){

  if (slow==fast){
    return slow;
  }
  else {
    slow= slow->next;
    fast = fast->next->next;
  }


}
  return NULL;

}
// node * StartingOfLoop(node * head){

// node * intersection = FloydCycleDetection(head);
// cout<< intersection->data;

// node * slow = head;
// node * fast = intersection;
// if(slow ==fast ){
//     return slow;
// }
// else {
//     slow= slow->next;
//     fast = fast->next;
// }

// return slow;

// }
// void RemoveLoop (node * head ){
//     node * starting = StartingOfLoop(head);
// if (starting == nullptr) {
//         // No loop found
//         return;
//     }
    
//     node * temp = head;
//     while(temp->next != starting){
//         temp = temp->next;
//     }
//     temp->next = nullptr;
      
// }
// node* StartingOfLoop(node* head) {
//     node* intersection = FloydCycleDetection(head);
//     cout << intersection->data << endl;

//     node* slow = head;
//     node* fast = intersection;

//     while (slow != fast) {
//         slow = slow->next;
//         fast = fast->next;
//     }

//     return slow;
// }

// void RemoveLoop(node* head) {
//     node* starting = StartingOfLoop(head);

//     if (starting == nullptr) {
//         // No loop found
//         return;
//     }

//     node* temp = starting;
//     while (temp->next != starting) {
//         temp = temp->next;
//     }
//     temp->next = nullptr;
// }
node* StartingOfLoop(node* head) {
    node* intersection = FloydCycleDetection(head);

    if (intersection == nullptr) {
        // No loop found
        return nullptr;
    }

    node* slow = head;
    node* fast = intersection->next;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void RemoveLoop(node* head) {
    node* starting = StartingOfLoop(head);

    if (starting == nullptr) {
        // No loop found
        return;
    }

    node* temp = starting;
    while (temp->next != starting) {
        temp = temp->next;
    }
    temp->next = nullptr;
}



int main(){

node * n1= new node(10);
node * head = n1;

InsertAthead(20,head);
InsertAthead(30,head);
InsertAthead(40,head);
InsertAthead(50,head);
InsertAthead(60,head);
InsertAthead(70,head);
// deleteNode(1, head);

// DetectLoop(head);
// print(head);
// if(DetectLoop(head)){
//     cout<<"cycle";
    
// }
// else{
//     cout<<"not cycle";
// }
InsertAthead(70,head);
node* tail = head;

print(head);
InsertAtTail(45,head,tail);
// print(head);
tail->next = head;
// if(DetectLoop(head)){
//     cout<<"cycle";
    
// }
// else{
//     cout<<"not cycle";
// }
InsertAtTail(85,head,tail);
InsertAtTail(95,head,tail);
// cout<<" cycle 95"<<endl;
InsertAtTail(100,head,tail);
print(head);
//  if(FloydCycleDetection(head)){
//     cout<<"cycle";
//  }
//  else {
//  cout<<"no cycle";
//  }
  node * starting = StartingOfLoop(head);
  cout<<starting->data;
RemoveLoop(head);
 if(FloydCycleDetection(head)){
    cout<<"cycle";
 }
 else {
 cout<<"no cycle";
 }


    return 0;
}






// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int d) {
//         data = d;
//         next = nullptr;
//     }
// };

// // Function to insert a node at the end of the linked list
// void InsertAtEnd(Node*& head, int data) {
//     Node* newNode = new Node(data);

//     if (head == nullptr) {
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Function to print the linked list
// void PrintList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Function to delete a node at the start of the linked list
// void DeleteAtStart(Node*& head) {
//     if (head == nullptr) {
//         return; // Empty list, nothing to delete
//     }

//     Node* temp = head;
//     head = head->next;
//     delete temp;
// }

// // Function to delete a node at the middle of the linked list
// void DeleteAtMiddle(Node*& head) {
//     if (head == nullptr || head->next == nullptr) {
//         return; // Empty list or only one node, nothing to delete
//     }

//     Node* slow = head;
//     Node* fast = head;
//     Node* prev = nullptr;

//     // Move fast pointer by two steps and slow pointer by one step
//     while (fast != nullptr && fast->next != nullptr) {
//         fast = fast->next->next;
//         prev = slow;
//         slow = slow->next;
//     }

//     // Delete the middle node
//     prev->next = slow->next;
//     delete slow;
// }

// // Function to delete a node at the end of the linked list
// void DeleteAtEnd(Node*& head) {
//     if (head == nullptr) {
//         return; // Empty list, nothing to delete
//     }

//     if (head->next == nullptr) {
//         delete head;
//         head = nullptr;
//         return; // Only one node in the list, delete it and set head to nullptr
//     }

//     Node* temp = head;
//     Node* prev = nullptr;

//     while (temp->next != nullptr) {
//         prev = temp;
//         temp = temp->next;
//     }

//     prev->next = nullptr;
//     delete temp;
// }

// // Function to delete a node at a specified position in the linked list
// void DeleteAtPosition(Node*& head, int position) {
//     if (head == nullptr) {
//         return; // Empty list, nothing to delete
//     }

//     if (position == 0) {
//         DeleteAtStart(head);
//         return;
//     }

//     Node* temp = head;
//     Node* prev = nullptr;
//     int count = 0;

//     while (temp != nullptr && count < position) {
//         prev = temp;
//         temp = temp->next;
//         count++;
//     }

//     if (temp == nullptr) {
//         return; // Position is beyond the length of the list, nothing to delete
//     }

//     prev->next = temp->next;
//     delete temp;
// }

// int main() {
//     Node* head = nullptr;

//     // Insert nodes at the end of the linked list
//     InsertAtEnd(head, 10);
//     InsertAtEnd(head, 20);
//     InsertAtEnd(head, 30);
//     InsertAtEnd(head, 40);
//     InsertAtEnd(head, 50);

//     cout << "Original Linked List: ";
//     PrintList(head);

//     // Delete node at the start of the linked list
//     DeleteAtStart(head);
//     cout << "After Deleting Node at Start: ";
//     PrintList(head);

//     // Delete node at the middle of the linked list
//     DeleteAtMiddle(head);
//     cout << "After Deleting Node at Middle: ";
//     PrintList(head);

//     // Delete node at the end of the linked list
//     DeleteAtEnd(head);
//     cout << "After Deleting Node at End: ";
//     PrintList(head);

//     // Delete node at a specified position
//     int position = 1;
//     DeleteAtPosition(head, position);
//     cout << "After Deleting Node at Position " << position << ": ";
//     PrintList(head);

//     return 0;
// }