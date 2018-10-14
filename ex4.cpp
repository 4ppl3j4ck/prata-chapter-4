#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string name;
    double diameter;
    double weight;
};

int main()
{
    pizza forExample;

    cout << "Enter the brand name: ";
    getline (cin, forExample.name);

    cout << "Enter the diameter of the pizza: ";
    cin >> forExample.diameter;

    cout << "Enter the weight of the pizza: ";
    cin >> forExample.weight;
    cout << endl;

    cout << "******************************************************" << endl;
    cout << "The brand name is: " << forExample.name << endl;
    cout << "The diameter of the pizza: " << forExample.diameter << endl;
    cout << "The weight of the pizza: " << forExample.weight << endl;
    cout << "******************************************************" << endl;
    return 0;
}
