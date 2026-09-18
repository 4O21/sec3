
#include <iostream>

using namespace std;

/*  
    The below declarations are needed as while declaring the friend function the compiler 
    has to know that both the classes are present or declared. 
    This is because the sum_class() funtion needs the objects of both the class as arguments.
*/

class A;
class B;

// class defination
class A {
    private:
        int num;
        
    public:
        void input() {
            cout << "Enter value for class A: ";
            cin >> num;
        }
        
        // declaration of friend function
        friend int sum_class(A a, B b);
};

class B {
    private:
        int num;
        
    public:
        
        void input() {
            cout << "Enter value for class B: ";
            cin >> num;
        }
        
        friend int sum_class(A a, B b);
};

// defination of friend function
int sum_class(A a, B b){
    cout << "The sum is " << a.num + b.num;
    return a.num + b.num;
}

int main()
{
    A a;
    B b;
    
    a.input();
    b.input();
    
    sum_class(a, b);

    return 0;
}