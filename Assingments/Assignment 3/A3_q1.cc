#include <iostream>

using namespace std;

//definning the node
struct nodeType{
  int info;//the data in the node
  nodeType *link;//the address of the next node
};
//function protype
bool isEmpty(nodeType *head);
void insertFirstElement(nodeType *&head, nodeType *&last, int info);
void insertAtNthPosition(nodeType *&head, int info, int position);
void insertAtLastPosition(nodeType *&head, nodeType *&last, int info);
void printList(nodeType *head);

int main(){

  //declaring two nodeType pointers the head and last and intializing them.
  nodeType *head = nullptr;//we will use it to traverse the list
  nodeType *last = nullptr;//we will use it to inser in the last position

  printList(head);

  cout << "Inserting 72 in an empty list.";
  insertFirstElement(head, last, 72);

  printList(head);

  cout << "Inserting 43 before 72.";
  insertAtNthPosition(head, 43, 0);

  printList(head);

  cout << "Inserting 8 at the end of the list.";
  insertAtLastPosition(head, last, 8);

  printList(head);

  cout << "Inserting 12 after 43.";
  insertAtNthPosition(head, 12, 1);

  printList(head);

  return 0;
}
//checking if the list is embty bool function returns true if the list id empty, and false otherwise.
bool isEmpty(nodeType *head){
  if(head == nullptr){
    return true;
  }
  else{
    return false;
  }
}
//function to insert the first element
void insertFirstElement(nodeType *&head, nodeType *&last, int info){
  nodeType *newNode = new nodeType; //creating the node
  newNode->info = info; //adding the data
  newNode->link = nullptr; //the first node doesn't link anywhere
  head = newNode; //pointing the head to the first node
  last = newNode; //since the list has only one element the last elemnt points to the same node
}
//function to insert at any position
void insertAtNthPosition(nodeType *&head, int info, int position){
  nodeType *newNode = new nodeType; //creating the node
  newNode->info = info;  //adding the data
  newNode->link = nullptr;//the first node doesn't link anywhere
  //if the list is empty we insert at the first position
  if(isEmpty(head)){
    head = newNode;
  }
  //if statement to insert in the first position before the first element
  else if(position == 0){
    newNode->link = head; //the new node will be linked to whatever the head was linking to
    head = newNode;//then we link the head to the newNode and the old link between head and the old first node will be deleted
  }
  else{
    nodeType *current; //create a new current pointer and give it the value of head to traverse the list without losing the value of head
    current = head;
    for(int i=0; i < position-1; i++){
      current = current->link;//moving the current till the position where we would like to insert a new element
    }
    newNode->link = current->link;//the new node will be linked to whatever the current was linking to
    current->link = newNode;//then we link the current to the newNode and the old link between current and the next node will be deleted
  }

}
//function to insert at the last position
void insertAtLastPosition(nodeType *&head, nodeType *&last, int info){
  nodeType *newNode = new nodeType;//creating the node
  newNode->info = info;//adding the data
  newNode->link = nullptr;//the first node doesn't link anywhere
  //if the list is empty we insert at the first position
  if(isEmpty(head)){
    head = newNode;
  }
  else{
    last = head;//assign to last the value of head so last will point to the first elemnt and will traverse the list
    //we will loop through the list untill we reach the last elemnt with address nullptr
    while(last->link != nullptr){
      last = last->link;//moving the last to the last position where we would like to insert a new element
    }
    last->link = newNode;//we link the last node to the new node and the new node will be linked to nothing
  }
}
//function to print the list
void printList(nodeType *head){
  nodeType *current; //create a new current pointer and give it the value of head to traverse the list without losing the value of head
  current = head;
  cout << endl;
  cout << "----------Printing the list------------" << endl;
  //if the list is empty we print that the list is empty
  if(isEmpty(head)){
    cout << "The list is empty." << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    return;
  }
  else{
  int i = 0;//declaree the index
  //we will loop through the list untill we reach the last elemnt with address nullptr
  while (current != nullptr) {
    cout << "Element " << i << " : " << current->info << endl;//print the elemnts
    current = current->link;//moving the current to the next position to print it
    i++;
    }
    cout << "-----------------------------------" << endl;
    cout << endl;
  }
}
