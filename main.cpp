#include <iostream>
#include <string>

using namespace std;

int main() {

    string firstName, lastName, streetAddress, city, zipCode;

    cout << "Enter the person's first name: ";
    getline(cin, firstName);

    cout << "Enter the person's last name: ";
    getline(cin, lastName);

    cout << "Enter the person's street address: ";
    getline(cin, streetAddress);

    cout << "Enter the person's city: ";
    getline(cin, city);

    cout << "Enter the person's zip code: ";
    getline(cin, zipCode);

    // Print the person's information
    cout << "\nPersonal Information:" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
