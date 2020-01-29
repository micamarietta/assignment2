#include <iostream>
using namespace std;

//calculate tax + cost
double addTax(double salesTax, double itemPrice){
  double taxDollars = (salesTax/100) * itemPrice;

  return taxDollars + itemPrice;
}

int main(int argc, char **argv){
  double salesTax;
  double itemPrice;

//get input and call function to calculate
  cout << "Enter the sales tax as a percentage." << endl;

  cin >> salesTax;

  cout << "Enter the cost of the item." << endl;

  cin >> itemPrice;

  cout << "The total price is $" << addTax(salesTax, itemPrice) << endl;

  return 0;
}
