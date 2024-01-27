#include <iostream>
#include <string>
#include "productType.h"

using namespace std;

productType::productType(){
  productName = "";
  id = "";
  manufacturer = "";
  quantitiesInStock = 0;
  price = 0.0;
  discount = 0.0;
} //default constructor
productType::productType(int q, double p, double d){
  productName = "";
  id = "";
  manufacturer = "";
  if( q < 0){
    quantitiesInStock = 0;
  }
  else{
    quantitiesInStock = q;
  }
  if( p < 0){
    price = 0.0;
  }
  else{
    price = p;
  }
  if( d < 0){
    discount = 0.0;
  }
  else{
    discount = d;
  }
}//constructors
productType::productType(string ids, int q, double p, double d){
  productName = "";
  id = ids;
  manufacturer = "";
  if( q < 0){
    quantitiesInStock = 0;
  }
  else{
    quantitiesInStock = q;
  }
  if( p < 0){
    price = 0.0;
  }
  else{
    price = p;
  }
  if( d < 0){
    discount = 0.0;
  }
  else{
    discount = d;
  }
}//constructors
productType::productType(string productN, string ids, string m, int q, double p, double d){
  productName = productN;
  id = ids;
  manufacturer = m;
  if( q < 0){
    quantitiesInStock = 0;
  }
  else{
    quantitiesInStock = q;
  }
  if( p < 0){
    price = 0.0;
  }
  else{
    price = p;
  }
  if( d < 0){
    discount = 0.0;
  }
  else{
    discount = d;
  }
}//constructors
//setting data
void productType::set(string productN, string ids, string m, int q, double p, double d){
  productName = productN;
  id = ids;
  manufacturer = m;
  if( q < 0){
    quantitiesInStock = 0;
  }
  else{
    quantitiesInStock = q;
  }
  if( p < 0){
    price = 0.0;
  }
  else{
    price = p;
  }
  if( d < 0){
    discount = 0.0;
  }
  else{
    discount = d;
  }
}

void productType::print() const{
  cout << "The product name is: " << productName << endl; //printing the product name
  cout << "The product id is: " << id << endl; //printing the product id
  cout << "The manufacturer is: " << manufacturer << endl; //printing the manufacturer
  cout << "The quantity availble in stock is: " << quantitiesInStock << endl; //printing the quantity in stock
  cout << "The product price is: " << price << endl; //printing the price
  cout << "You have a discount of: " << discount << " on the product" << endl; //printing the discount
}//printing data
void productType::setQuantitiesInStock(int x){
  if( x < 0){
    quantitiesInStock = 0;
  }
  else{
    quantitiesInStock = x;
  }
} //setting quantities
void productType::updateQuantitiesInStock(int x){
  quantitiesInStock += x;
} //updatting quantities
int productType::getQuantitiesInStock() const{
  return quantitiesInStock;
}//getter quantities
void productType::setPrice(double x){
  if( x < 0){
    price = 0.0;
  }
  else{
    price = x;
  }
} //setting price
double productType::getPrice() const{
  return price;
} //getter price
void productType::setDiscount(double d){
  if( d < 0){
    discount = 0.0;
  }
  else{
    discount = d;
  }
} //setting discount
double productType::getDiscount() const{
  return discount;
} //getter discount
