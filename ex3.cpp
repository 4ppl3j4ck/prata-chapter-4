#include <iostream>
#include <string>
using namespace std;

    struct candyBar
    {
        string name;
        double weight;
        int calories;
    };

int main()
{   candyBar candyArray[3];

    cout << "Enter the name of the 1st box of chocolates: ";
    cin >> candyArray[0].name;
    cout << "Enter the weight of the 1st box of chocolates: ";
    cin >> candyArray[0].weight;
    cout << "Enter the number of calories in the 1st box of chocolates: ";
    cin >> candyArray[0].calories;
    cout << endl;

    cout << "Enter the name of the 2nd box of chocolates: ";
    cin >> candyArray[1].name;
    cout << "Enter the weight of the 2nd box of chocolates: ";
    cin >> candyArray[1].weight;
    cout << "Enter the number of calories in the 2nd box of chocolates: ";
    cin >> candyArray[1].calories;
    cout << endl;

    cout << "Enter the name of the 3rd box of chocolates: ";
    cin >> candyArray[2].name;
    cout << "Enter the weight of the 3rd box of chocolates: ";
    cin >> candyArray[2].weight;
    cout << "Enter the number of calories in the 3rd box of chocolates: ";
    cin >> candyArray[2].calories;
    cout << endl;
    cout << "******************************************************" << endl;
    cout << "Name of the 1st box of chocolates: " << candyArray[0].name << endl;
    cout << "Weight of the 1st box of chocolates: " << candyArray[0].weight << endl;
    cout << "Number of calories in 1st box of chocolates: " << candyArray[0].calories << endl;
    cout << endl;

    cout << "Name of the 2nd box of chocolates: " << candyArray[1].name << endl;
    cout << "Weight of the 2nd box of chocolates: " << candyArray[1].weight << endl;
    cout << "Number of calories in 2nd box of chocolates: " << candyArray[1].calories << endl;
    cout << endl;

    cout << "Name of the 3rd box of chocolates: " << candyArray[2].name << endl;
    cout << "Weight of the 3rd box of chocolates: " << candyArray[2].weight << endl;
    cout << "Number of calories in 3rd box of chocolates: " << candyArray[2].calories << endl;
    cout << endl;
    cout << "******************************************************" << endl;
    return 0;
}
