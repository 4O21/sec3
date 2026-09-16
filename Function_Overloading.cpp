
// This program shows the concept of function overloading using a simple 'add()' function. Other examples may use different functions to demonstrarte the concept of Fucntion overloading.

// This example does not use any class. However if the question is asking to use class then member functions may be used instead of regular fucntions.

#include <iostream>

using namespace std;

int add(int num1, int num2) {
 // cout << "add() with two args called! \n"; // this line is only to indicate which add() function was called. It can be commented out when not required.
  return num1 + num2;
}

int add(int num1, int num2, int num3) {
  // cout << "add() with three args called! \n"; // this line is only to indicate which add() function was called. It can be commented out when not required.
    return num1 + num2 + num3;
}

// More add() functions with more arguments can be created.

int main() {

  cout << add(5, 4) << endl; // here, the add() function with two args is called
  cout << add(4, 5, 7) << endl; // here, the add() function with three args is called
  
  return 0;
}
