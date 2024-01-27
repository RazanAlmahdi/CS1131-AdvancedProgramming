#include <iostream>
#include <string>

using namespace std;
//node structure
struct nodeType{
  int info;
  nodeType *link;
};
//functions prototype
void insert58(nodeType *&list);
void insert45(nodeType *list);
void delete25(nodeType *&list);
void printList(nodeType *list);



int main(){

  nodeType *ptr, *list;//pointers

  char choice;
  ptr = new nodeType; //creating a new node
  ptr->info = 16;
  list = new nodeType;//creating a new node
  list->info = 25;
  list->link = ptr;
  ptr = new nodeType;//creating a new node
  ptr->info = 12;
  ptr->link = nullptr;
  list->link->link = ptr;

  printList(list);

  cout << "choose:";
  cout << "c.insert45 - d.insert58 - e.delete25" << endl;
  cin >> choice;//choose which function to execute
  switch (choice) {
      case 'c':
        insert45(list);
        printList(list);
        break;
      case 'd':
        insert58(list);
        printList(list);
        break;
      case 'e':
        delete25(list);
        printList(list);
        break;
    }
  return 0;
}

void insert45(nodeType *list){
  nodeType *newNode = new nodeType; //creating a new node
  newNode->info = 45;
  newNode->link = nullptr;

  nodeType *current;
  current = list;
  //while loop to check all the list to insert the new node in the desired position
  while((current->info != 16) && (current != nullptr)){
    current = current->link;
  }
  if(current->info == 16){
    newNode->link = current->link;
    current->link = newNode;
  }
}

void insert58(nodeType *&list){
  nodeType *newNode;

  newNode = new nodeType;//creating a new node

  newNode->info = 58;
  //insert the new node
  newNode->link = list;
  list = newNode;//point the list pointer to the new node

}

void delete25(nodeType *&list){
  nodeType *current;

  current = list;
  list = current->link;//point the list pointer to the next node
  delete current;//delete the node

}

void printList(nodeType *list){
  nodeType *current; //create a new current pointer and give it the value of head to traverse the list without losing the value of head
  current = list;
  cout << endl;
  cout << "----------Printing the list------------" << endl;
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
