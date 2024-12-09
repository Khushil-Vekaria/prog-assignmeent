#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter the student's full name: ";
    getline(cin, fullName);

    cout << "Enter the course name: ";
    getline(cin, course);

    cout << "Enter the score: ";
    cin >> score;

    if (score >= 70) {
        cout << fullName << " scored " << score << " in " << course << ". Grade: A" << endl;
    } else if (score >= 60) {
        cout << fullName << " scored " << score << " in " << course << ". Grade: B" << endl;
    } else if (score >= 50) {
        cout << fullName << " scored " << score << " in " << course << ". Grade: C" << endl;
    } else if (score >= 40) {
        cout << fullName << " scored " << score << " in " << course << ". Grade: D" << endl;
    } else if (score >= 0) {
        cout << fullName << " scored " << score << " in " << course << ". Grade: F" << endl;
    } else {
        cout << "Invalid score entered." << endl;
    }

return 0;
}