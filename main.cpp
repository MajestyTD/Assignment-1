#include <iostream>
#include <string>

using namespace std;

double calculateAverage(double assignment, double coursework, double midterm, double endTerm) {
    return (assignment + coursework + midterm + endTerm);
}

int main() {
    double physicsMarks, chemistryMarks, mathMarks;

    // Input marks for Physics
    cout << "Enter marks for Physics:" << endl;
    cout << "Assignment: ";
    cin >> physicsMarks;
    cout << "Coursework: ";
    cin >> physicsMarks;
    cout << "Mid Term: ";
    cin >> physicsMarks;
    cout << "End of Term: ";
    cin >> physicsMarks;

    // Input marks for Chemistry
    cout << "Enter marks for Chemistry:" << endl;
    cout << "Assignment: ";
    cin >> chemistryMarks;
    cout << "Coursework: ";
    cin >> chemistryMarks;
    cout << "Mid Term: ";
    cin >> chemistryMarks;
    cout << "End of Term: ";
    cin >> chemistryMarks;

    // Input marks for Math
    cout << "Enter marks for Math:" << endl;
    cout << "Assignment: ";
    cin >> mathMarks;
    cout << "Coursework: ";
    cin >> mathMarks;
    cout << "Mid Term: ";
    cin >> mathMarks;
    cout << "End of Term: ";
    cin >> mathMarks;

    // Calculate averages
    double avgPhysics = calculateAverage(physicsMarks, physicsMarks, physicsMarks, physicsMarks);
    double avgChemistry = calculateAverage(chemistryMarks, chemistryMarks, chemistryMarks, chemistryMarks);
    double avgMath = calculateAverage(mathMarks, mathMarks, mathMarks, mathMarks);

    // Output the results
    cout << "Average marks in Physics: " << avgPhysics << endl;
    cout << "Average marks in Chemistry: " << avgChemistry << endl;
    cout << "Average marks in Math: " << avgMath << endl;

    // Calculate overall average
    double overallAverage = (avgPhysics + avgChemistry + avgMath);
    cout << "Overall average marks: " << overallAverage << endl;

    return 0;
}
