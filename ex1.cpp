#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your first name? ";
    string firstName;
    getline (cin, firstName);
    cout << "What is your last name? ";
    string lastName;
    getline (cin, lastName);
    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    grade = ++grade;
    cout << "What is your age? ";
    int age;
    cin >> age;
    cout << "Name: " << lastName << ", "<< firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;
    return 0;
}
