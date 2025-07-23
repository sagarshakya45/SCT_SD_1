#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int option;
    double temp;

    cout << "Welcome to the Temperature Converter!" << endl;
    cout << "What unit is your temperature in?" << endl;
    cout << "1. Celsius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cout << "Please enter 1, 2, or 3: \n";
    cin >> option;

    if (option < 1 || option > 3) {
        cout << "Oops! Invalid choice. Please restart the program." << endl;
        return 1;
    }

    cout << "Enter the temperature value: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    if (option == 1) {
        double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        double kelvin = temp + 273.15;

        cout << "\nYou entered: " << temp << " Celsius" << endl;
        cout << "In Fahrenheit: " << fahrenheit << " Fahrenheit" << endl;
        cout << "In Kelvin: " << kelvin << " Kelvin" << endl;

    } else if (option == 2) {
        double celsius = (temp - 32.0) * 5.0 / 9.0;
        double kelvin = celsius + 273.15;

        cout << "\nYou entered: " << temp << " Fahrenheit" << endl;
        cout << "In Celsius: " << celsius << " Celsius" << endl;
        cout << "In Kelvin: " << kelvin << " Kelvin" << endl;

    } else if (option == 3) {
        double celsius = temp - 273.15;
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        cout << "\nYou entered: " << temp << " Kelvin" << endl;
        cout << "In Celsius: " << celsius << " Celsius" << endl;
        cout << "In Fahrenheit: " << fahrenheit << " Fahrenheit" << endl;
    }

    cout << "\nThank you for using the converter!" << endl;
    return 0;
}
