#include <iostream>
#include <string>
using namespace std;

struct pizza
{
    double diameter;
    string name;
    double weight;
};

int main()
{
    pizza *forExample = new pizza;

    cout << "Enter the diameter of pizza: ";
    cin >> forExample->diameter;
    cin.ignore();
    cout << "Enter the name of the company: ";
    getline (cin, forExample->name);
    cout << "Enter the weight of pizza: ";
    cin >> forExample->weight;
    cout << endl;
    cout << "******************************************************" << endl;
    cout << "Name of the company: " << forExample->name << endl;
    cout << "Diameter of pizza: " << forExample->diameter << endl;
    cout << "weight of pizza: " << forExample->weight << endl;
    cout << "******************************************************" << endl;
    delete forExample;
    return 0;
}
