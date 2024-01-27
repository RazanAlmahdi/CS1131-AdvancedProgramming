#include <iostream>
#include <string>
using namespace std;
//creating the node
struct addressBook{
  string name;
  string address;
  string phone;
  addressBook *link;
};
//functions prototype
void addEntry();
void deleteEntry();
void searchEntry();
void printAll();
//the head and last of the linked list
addressBook *head = nullptr;
addressBook *last = nullptr;

int main(){
  int choice;
  bool state=false;
  cout << "Welcome to the address book. " <<endl;
  //a loop for testing the program
  while(!state){
    cout << "----------------------------------------------------";
    cout <<"\nChoose what you want to do (by number) :" <<endl;
    cout <<"1. Add an entry. \n2. Delete an entry. \n3. Search for an entry. \n4. Print all entries. \n5. Exit." << endl;
    cin >> choice;
    //choose to execute one of the functions or exit the program
    switch (choice) {
      case 1:
        addEntry();
        break;
      case 2:
        deleteEntry();
        break;
      case 3:
        searchEntry();
        break;
      case 4:
        printAll();
        break;
      case 5:
        state=true;
        cout << "Thank you, see you soon!" ;
    }
  }
  return 0;
}
//add a new address to the address book
void addEntry(){
  addressBook *newAddress; //creating a new node
  newAddress= new addressBook; //allocate a space for the new node
  string newName="", newAdd="", newPhNum="";
  cout << "\nEnter the name of the person: ";
  cin.ignore();
  getline(cin, newName); //get the name
  newAddress->name=newName;
  cout << "\nEnter the address of the person: ";
  getline(cin, newAdd);//get the address
  newAddress->address=newAdd;
  cout << "\nEnter the phone number of the person: ";
  cin >> newPhNum; //get the phone number
  newAddress->phone=newPhNum;
  //add the new address to the address book
  if(head==nullptr){
    head=newAddress;
    last=newAddress;
  }
  else{
    last->link=newAddress;
    last=newAddress;
  }
}
//delete an address
void deleteEntry(){
  string delName;
  addressBook *current, *previous;
  cout << "Enter the name you want to delete: ";
  cin.ignore();
  getline(cin, delName); //get the name we want to delete from the user
  //search for the name in the address book
  if (head == nullptr){
    cout << "The address bookk is empty." << endl;
  }
  else {
    current = head;
    previous = head;
    bool found=false;
    while(current!=nullptr && !found){
      if(current->name==delName){
        found=true;
      }
      else{
        previous=current;
        current=current->link;
      }
    }
    if(found){//if we found the name in the list, it will be deleted
      previous->link=current->link;
      delete current;
      cout << "\n The address has been deleted." << endl;
    }
    else{
      cout << "The address you want to delete does not exist."<< endl;
    }
  }

}
//search for an address and print it
void searchEntry(){
  addressBook *search;
  search = head;
  string searchName;
  bool found=false;
  cout << "Enter the name you want to search its address: ";
  cin.ignore();
  getline(cin, searchName); //get the name we want to search from the user
  while (search!=nullptr && !found){
    if (search->name==searchName){
      cout << "Address: " << search->address <<endl;
      cout << "Phone Number: " << search->phone <<endl;
      found=true;
    }
    else{
      search=search->link;//moving to next element in the address book(the list)
    }
  }
  if(!found)
    cout << "The address you searched for does not exist." <<endl;
}
//printing all the addresses in the address book
void printAll(){
  addressBook *current;
  current=head;
  if(head==nullptr){
    cout <<"The address book is empty." <<endl;
  }
  else{
    cout << "---------Addresses List---------" <<endl;
    while (current!=nullptr) {
      cout << "Name: " << current->name<<endl;
      cout << "Address: " << current->address <<endl;
      cout << "Phone Number: " << current->phone <<endl;
      cout <<"------------------------------------------------------------------------" <<endl;
      current=current->link;
  }
}
}
