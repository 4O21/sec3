#include <iostream>

using namespace std;

class Employee {
    private:
        static int count; // Static data member
    public:

        Employee() {
            count = count + 1; 
        }
        static void show_count(); // Static member function
};

int Employee::count;

void Employee::show_count(){
    cout << "\nTotal number of employees: " << count << "\n";
}

int main() {

    Employee e1, e2, e3, e4; // four objects are created

    Employee::show_count();

    return 0;
}