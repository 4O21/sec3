
#include <iostream>

using namespace std;

class Rectangle {
    private:
        float length, breadth;

    public:

    // function of set the length and breadth
        void set_data(float l, float b){
            length = l;
            breadth = b;
        }

    // function to display area & perimeter
        void display(){
            cout << "\nArea of Rectangle: " << length*breadth << "\n";
            cout << "Perimeter of Rectangle: " << 2 * (length + breadth) << "\n";
        }
};

int main() {

    float l,b;
    Rectangle rec;

    cout << "Enter the length of rectangle: ";
    cin >> l;

    if(l <= 0) {
        cout << "\nLength must be greater than 0!\n";
        return 0;
    }

    cout << "Enter the breadth of rectangle: ";
    cin >> b;

    if(b <= 0) {
        cout << "\nBreadth must be greater than 0!\n";
        return 0;
    }

    rec.set_data(l,b);
    rec.display();

    return 0;
}