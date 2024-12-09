#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, course;
    int score;

    cout << "Enter the student's full name: ";
    getline(cin, name);

    cout << "Enter the course name: ";
    getline(cin, course);

    cout << "Enter the student's score: ";
    cin >> score;

    cout << "Student Name: " << name << endl;
    cout << "Course: " << course << endl;

    switch ((score / 10) * 10) {
        case 90:
        case 80:
        case 70:
            cout << "Grade: A" << endl;
            break;
        case 60:
            cout << "Grade: B" << endl;
            break;
        case 50:
            cout << "Grade: C" << endl;
            break;
        case 40:
            cout << "Grade: D" << endl;
            break;
        case 30:
        case 20:
        case 10:
        case 0:
            cout << "Grade: F" << endl;
            break;
        default:
            cout << "Invalid score" << endl;
    }

return 0;
}
