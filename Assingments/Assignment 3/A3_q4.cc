#include <iostream>

using namespace std;

//declaring a node class
class NodeType{
public:
  int info;//the data in the node
  NodeType *link;//the address of the nest node

  //default constructor initalizing the info and link
  NodeType(){
    info = 0;
    link = nullptr;
  }
  //overloaded constructor initalizing the info
  NodeType(int myinfo){
    info = myinfo;
    link = nullptr;
  }
};

//declaring a linked list class
class LinkedListType{
  NodeType *head; //declaring a head nodeType pointer
  NodeType *last; //declaring a last nodeType pointer

public:
  //default constructor initalizing the head and last
  LinkedListType(){
    head = nullptr;
    last = nullptr;
  }
  //method of the linkedList class
  void insert(int);//insert a node with value info
  void printList();//print the list
  int findSmallest();//search for the smallest node and return it
  void deleteSmallest(int);//delete the smallest node
  void deleteAllOccurences(int);//delete all occurences of a given info
  //destructors
  void destroyList();
   ~LinkedListType();
};
//insert a node with value info
void LinkedListType::insert(int info){
  NodeType *newNode = new NodeType(info);//create a node
  if(head == nullptr){ //if the list is empty the node will be pointed by head and last
    head = newNode;
    last = newNode;
    return;
  }
  else{
    //list is not empty newNode is pointed by last
    last->link = newNode;
    last = newNode;

  }
}
//search for the smallest node and return it
int LinkedListType::findSmallest(){
  NodeType *current;//declare a current pointer to a nodeType
  current = head;//head and current will point to the same elemnet
  int smallest = INT_MAX;//declaring a smallest integer
  if(head == nullptr){//if the list is empty we cant search
    cout << "Cannot search an empty list." << endl;
    return 0;
  }
  else{
    while(current != nullptr){//while we didn't reach the end of the list we keep on looking for the smallest value
      if(smallest > current->info){ //if smallest greater than info
        smallest = current->info; //update the value of smallest
      }
      else{
        current = current->link;//else move to the next element
      }
    }

  }

  return smallest;//return the smallest value
}
//delete the smallest node
void LinkedListType::deleteSmallest(int smallest){
  NodeType *current, *previous;//declare two nodeType pointers current and previous
  //assign head to both current and previous
  current = head;
  previous = head;
  bool found = false;//boolena variable to look for the smallest

  if(head == nullptr){//if the list is empty we cant delete
    cout << "Cannot delete from an empty list." << endl;
    return;
  }
  else if(head->info == smallest){//if the smallest is the first element we link head to the second elemnt
        head = current->link;
        delete current;//delete the current head
      }
  else{
    while((current != nullptr) && (!found)){//if the smallest is not the first element we will move through the list until we reach the last element or we find the smallest
      if(current->info == smallest){//if current data equals smallest we set found to true
        found = true;
        previous->link = current->link;//we link the previous element to whatever the current was linking to
        delete current;//delete the current
      }
      else{
        previous = current;//assign current to previous
        current = current->link;//move the current
      }
    }
  }
}
//delete all occurences of a given info
void LinkedListType::deleteAllOccurences(int info){
  NodeType *current, *previous;//declare two nodeType pointers current and previous
  //assign head to both current and previous
  current = head;
  previous = head;

  if(head == nullptr){//if the list is empty we cant delete
    cout << "Cannot delete from an empty list." << endl;
    return;
  }
  else{//else we search the whole list for the target value and we delete all its occurences
    while(current != nullptr){//we loop till the end of the list
      if(head->info == info){//if the head value is equal to the target
        head = current->link;//we link head to the second elemnt
        previous = head;//update the previous
        delete current;//delete the current
        current = head;//update the current
      }
      else if(current->info == info){//if the head does not equal the target we compare the current data to the target
        previous->link = current->link;//if they are equal we link the previous node to whatever the current was linked to
        delete current;//we delete the current
        current = previous->link;//and update the value of current
      }
      else{
        previous = current;//update previous
        current = current->link;//update current
      }
    }
  }
}
//print the list
void LinkedListType::printList(){
  NodeType *current; //create a new current pointer and give it the value of head to traverse the list without losing the value of head
  current = head;
  cout << endl;
  cout << "----------Printing the list------------" << endl;
  //if the list is empty we print that the list is empty
  if(head == nullptr){
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
//destructors
void LinkedListType::destroyList(){
  NodeType *current;//create a current nodeType pointer to go through the list and delete all the nodes
  while(head != nullptr){
    current = head;//assign head to current
    head = head->link;//move head to the next node
    delete current;//delete current
  }
  last = nullptr;
}

LinkedListType::~LinkedListType(){
  cout << "-----------------List Deleted------------" << endl;
  destroyList();//call the destroy list to delete the list
}
//menu prototype
int menu();

int main(){
  //declaring LinkedListType obejct
  LinkedListType linkedList;
  //declaring Variables
  int choice;
  int num, target, smallest;

  //Printing the list
  linkedList.printList();
  choice = menu();//calling the menu function

  //switch statement to compute the choice of the user will run till the user chooses 4 the program will quit
  while(choice != 4){
    switch (choice) {
      case 1:

        cout << "Enter the number you would like to insert: ";
        cin >> num;//inputting the number to insert
        cout << endl;

        linkedList.insert(num);//calling the insert function
        linkedList.printList();//Printing the list
        break;

      case 2:

        smallest = linkedList.findSmallest();//calling the findSmallest function to search for the smallest
        linkedList.deleteSmallest(smallest);//calling the deleteSmallest function to delete the smallest
        linkedList.printList();//Printing the list
        break;

      case 3:

        cout << "Enter the number you would like to delete: ";
        cin >> target;//inputting the target value
        cout << endl;

        linkedList.deleteAllOccurences(target);//calling the deleteAllOccurences function to delete all occurences of the target value
        linkedList.printList();//Printing the list

        break;
    }
    choice = menu();//calling the menu function
  }

  cout << "Thank you for using out program! Bye!" << endl;
  return 0;
}
//menu function definition
int menu(){
  int choice;

  cout << "What would you like to do?" << endl;
  cout << "1. Insert into a linked list.\n2. Delete the smallest data.\n3. Delete all occurences of a given value.\n4. Quit";//displaying the choices
  cout << endl;
  cin >> choice;//inputting the choice

  return choice;//returning the choice
}
