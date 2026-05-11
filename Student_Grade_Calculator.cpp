#include <iostream>
using namespace std;

int main() {
    int students;
    float marks, total = 0, average;

    cout << "Enter number of students: ";
    cin >> students;

    for (int i = 1; i <= students; i++) {
        cout << "Enter marks for student " << i << ": ";
        cin >> marks;

        total += marks;
    }

    average = total / students;

    cout << "\nAverage Marks: " << average << endl;

    if (average >= 50)
        cout << "Overall Result: PASS\n";
    else
        cout << "Overall Result: FAIL\n";

    return 0;
}