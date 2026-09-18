#include <iostream>

using namespace std;

class Distance {
    private:
        int feet;
        int inches;

    public:
        void get_data() {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }

        void add_distance(Distance d) {
    
            int total_feet = feet + d.feet;
            int total_inches = inches + d.inches;

            total_feet = total_feet + total_inches / 12;
            total_inches = total_inches % 12;

            cout << "\nResultant Distance = " << total_feet << " feet " << total_inches << " inches" << endl;
        }
};

int main() {
    Distance d1, d2;

    cout << "Enter first distance:\n";
    d1.get_data();

    cout << "\nEnter second distance:\n";
    d2.get_data();

    d1.add_distance(d2);

    return 0;
}