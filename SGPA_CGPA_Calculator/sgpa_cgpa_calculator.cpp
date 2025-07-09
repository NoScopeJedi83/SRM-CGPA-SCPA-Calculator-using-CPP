#include <iostream>
#include <unordered_map>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

unordered_map<string, int> gradeMap = {
    {"O", 10}, {"A+", 9}, {"A", 8}, {"B+", 7},
    {"B", 6}, {"C", 5}, {"P", 4}, {"F", 0}, {"AB", 0}
};

// Converts input grade to uppercase
string normalizeGrade(string grade) {
    for (char& c : grade) c = toupper(c);
    return grade;
}

// SGPA Calculator
double calculateSGPA() {
    int subjects;
    cout << "Enter number of subjects in this semester: ";
    cin >> subjects;

    double totalCredits = 0, weightedSum = 0;

    for (int i = 1; i <= subjects; ++i) {
        string grade;
        double credit;

        cout << "\nSubject " << i << ":\n";
        cout << "Letter Grade (O, A+, A, etc.): ";
        cin >> grade;
        grade = normalizeGrade(grade);

        if (gradeMap.find(grade) == gradeMap.end()) {
            cout << "Invalid grade. Please try again.\n";
            --i;
            continue;
        }

        cout << "Credits: ";
        cin >> credit;

        weightedSum += gradeMap[grade] * credit;
        totalCredits += credit;
    }

    if (totalCredits == 0) return 0;

    double sgpa = weightedSum / totalCredits;
    cout << fixed << setprecision(2);
    cout << "\nSGPA for this semester: " << sgpa << endl;
    return sgpa;
}

// CGPA Calculator
void calculateCGPA() {
    int semesters;
    cout << "\nEnter total number of semesters completed: ";
    cin >> semesters;

    double totalCredits = 0, totalWeightedSGPA = 0;

    for (int i = 1; i <= semesters; ++i) {
        double sgpa, credits;
        cout << "\nSemester " << i << ":\n";
        cout << "SGPA: ";
        cin >> sgpa;
        cout << "Total Credits: ";
        cin >> credits;

        totalWeightedSGPA += sgpa * credits;
        totalCredits += credits;
    }

    if (totalCredits == 0) {
        cout << "\nError: Total credits cannot be zero.\n";
        return;
    }

    double cgpa = totalWeightedSGPA / totalCredits;
    cout << fixed << setprecision(2);
    cout << "\nYour overall CGPA is: " << cgpa << endl;
}

int main() {
    cout << "SRM SGPA & CGPA Calculator\n";
    int choice;

    do {
        cout << "\nChoose an option:\n";
        cout << "1. Calculate SGPA for a semester\n";
        cout << "2. Calculate CGPA from SGPAs\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                calculateSGPA();
                break;
            case 2:
                calculateCGPA();
                break;
            case 0:
                cout << "Exiting calculator.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
