
#include <iostream>

using namespace std;

class Item {
  private:

    static int count; // This variable is same for all the object, since it belongs to class and not to a particular object
    int number;

  public:

    // This is a constructor. It is called automatically whenever an object is created.
    Item() {
      count++; // when ever a new Object is created the 'count' variable gets increased by 1. Therefore it will show the total number of object created.
    }

    void get_num(int num){
      number = num;
    }

    void get_count(){ // method to access or print the value of count.
      cout << "COUNT: " << count << endl;
    }
};

int Item::count = 0; // static varibale defined. Note that the count variable is private, so it is not accessible through object or class. Here it is not access but defined with the value 0.

int main() {
  Item one, two, three, four; // 4 objects are created, Hence, the value of "count" will be 4.

  one.get_count();
  two.get_count();
  three.get_count();
  four.get_count();

  // cout << one.count; // this will not work here because count is a private variable. If it was a public varible, it would be accessible but every object would show the same value.
}
