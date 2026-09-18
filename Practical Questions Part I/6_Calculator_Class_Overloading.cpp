#include <iostream>

using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        int add(int a, int b, int c) {
            return a + b + c;
        }

        float add(float a, float b) {
            return a + b;
        }
};

int main() {
    Calculator calc;
    int a, b, c;
    float d, e;
    int choice;

    do {
        cout << "\n----- Calculator -----" << endl;
        cout << "1. Add two integers" << endl;
        cout << "2. Add three integers" << endl;
        cout << "3. Add two floating-point numbers" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter two integers: ";
                cin >> a >> b;

                cout << "Sum = " << calc.add(a, b) << endl;
                break;
            }

            case 2: {
                cout << "Enter three integers: ";
                cin >> a >> b >> c;

                cout << "Sum = " << calc.add(a, b, c) << endl;
                break;
            }

            case 3: {
                cout << "Enter two floating-point numbers: ";
                cin >> d >> e;

                cout << "Sum = " << calc.add(d, e) << endl;
                break;
            }

            case 4:
                cout << "Thanks for using Calculator!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}