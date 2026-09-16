
// This program is an example of both 'friend' function and 'passing objects to function & returning objects from functions'
// It is somewhat different from the orginal code given during lecture.

// Here we used add_time() function as a friend function instead of a member function();

#include <iostream>

using namespace std;

class Time {
    private:
        int minute, hour;

    public:
        void get_time(int hr, int min) {
            minute = min;
            hour = hr;
        }

        void display_time() {
            cout << hour << " hours and " << minute << " minutes\n";
        }

        friend Time add_time(Time, Time); // The funtion to add time is ONLY declared as friend function because we would need to access the private members "hour" and "minute". This is not a member function.
};

// actual defination of the add_time() function
Time add_time(Time t1, Time t2) {
    Time t3;

    t3.minute = t1.minute + t2.minute;
    t3.hour = t1.hour + t2.hour + (t3.minute/60);
    t3.minute = t3.minute%60;

    return t3;
}

int main() {

    int min_1, hour_1;
    int min_2, hour_2;

    Time T1, T2;

    cout << "Enter hour for Time 1: ";
    cin >> hour_1;

    cout << "Enter minute for Time 1: ";
    cin >> min_1;

    cout << "Enter hour for Time 2: ";
    cin >> hour_2;

    cout << "Enter minute for Time 2: ";
    cin >> min_2;

    T1.get_time(hour_1, min_1);
    T2.get_time(hour_2, min_2);

    Time T3 = add_time(T1, T2);

    cout << "===== Time 1: =====\n";
    T1.display_time();

    cout << "===== Time 2: =====\n";
    T2.display_time();

    cout << "===== Time 3: =====\n";
    T3.display_time();

    return 0;

}