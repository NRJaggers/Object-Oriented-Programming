//============================================================================
// Name        : 10-09_.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
class GroceryItem {
  private:
    string itemDesc;
  static int totalItemQOHCounter; // count times getTotalItemQOH called
  // starts at zero
  public:
    inline int getTotalItemQOH(); // every time function is used, code is copied to the place it is called
    							  // results in faster execution but more memory being used
  ~GroceryItem();
};

int GroceryItem::totalItemQOHCounter = 0; // static member variable must
// be defined somewhere
int GroceryItem::getTotalItemQOH() {
  totalItemQOHCounter++;
  return totalItemQOHCounter;
}
GroceryItem::~GroceryItem() {
  cout << "in dest" << endl;
  totalItemQOHCounter = 0;
}
int main() {
  GroceryItem * g;
  g = new GroceryItem;
  g ->getTotalItemQOH(); // goes from 0 to 1
  g ->getTotalItemQOH(); // goes from 1 to 2
  cout << g ->getTotalItemQOH() << endl; // and 2 to 3
  delete g; // destructor resets to 0
  g = new GroceryItem;
  cout << g ->getTotalItemQOH() << endl; // goes from 0 to 1
  return 0;
}
