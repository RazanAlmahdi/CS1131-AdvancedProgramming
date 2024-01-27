#include <iostream>
#include <string>
#include "productType.h"

using namespace std;

int main(){
  //variables declaration
  productType product1; //clas object
  string name, id, manufacturer;
  int quantity, newQuantity;
  double price, discount;

  //inputting data
  cout << "Enter the name of the product: ";
  getline(cin,name);

  cout << "Enter the id of the product: ";
  getline(cin, id);

  cout << "Enter the manufacturer of the product: ";
  getline(cin, manufacturer);

  cout << "Enter the price of the product: ";
  cin >> price;
  product1.setPrice(price);

  cout << "Enter the quantity availble in stock of the product: ";
  cin >> quantity;
  product1.setQuantitiesInStock(quantity);

  cout << "Enter the discount availble for the product: ";
  cin >> discount;
  product1.setDiscount(discount);

  product1.set(name, id, manufacturer, quantity, price, discount); //setting the strings

  cout << "Those are the information of your object: " << endl;
  product1.print(); //printing the data

  cout << "Enter the number of new items added to the stock: ";
  cin >> newQuantity;
  cout << endl;

  product1.updateQuantitiesInStock(newQuantity);//updatting quantity in stock
  cout << "The new quantity is: " << product1.getQuantitiesInStock() << endl;

  cout << "The total price of  the stock the manufacturer has is: " << (product1.getPrice() * product1.getQuantitiesInStock()) * (1 - product1.getDiscount()) << endl; // printing the price after discount of the productType

  return 0;
}
