#include <iostream>

using namespace std;

class Vector {
    private:

        int v[50], k, pos, n, r;

    public:

        void create();
        void modify();
        void multiply();
        void display();
};

void Vector::create() {

    cout << "How many elements do you want to keep in vector?\n";
    cin >> n;

    cout << "Enter " << n << " elements: \n";

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
}

void Vector::modify(){

    cout << "\nEnter the position of the element you want to modify: ";
    cin >> pos;

    cout << "Enter the new value: ";
    cin >> r;

    v[pos-1] = r;
}

void Vector::multiply(){

    cout << "\nEnter the scaler value through which we multiply each elements of vector: ";
    cin >> k;

    for(int i = 0; i < n; i++){
        v[i] = v[i] * k;
    }
}

void Vector::display(){

    cout << "Elements of vector are: \n(";

    for(int i = 0; i < n-1; i++){
        cout << v[i] << ", ";
    }
    
    cout << v[n-1] << ")";
}

int main() {

    Vector vec;

    vec.create();
    vec.display();
    vec.modify();
    vec.display();
    vec.multiply();
    vec.display();
    
    return 0;
}