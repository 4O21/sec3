
#include <iostream>

using namespace std;

class Item {
  private:

    static int count; 
    int number;

  public:

    // This is a constructor. It is called automatically whenever an object is created.
    Item() {
      count++; 
    }

    void get_num(int num){
      number = num;
    }

    void get_count(){ .
      cout << "COUNT: " << count << endl;
    }
};

int Item::count = 0; 

int main() {
  Item one, two, three, four; // 4 objects are created, Hence, the value of "count" will be 4.

  one.get_count();
  two.get_count();
  three.get_count();
  four.get_count();

  // cout << one.count; // this will not work here because count is a private variable. If it was a public varible, it would be accessible but every object would show the same value.
}
