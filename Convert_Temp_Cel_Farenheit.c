Aim:
Write a C++ program to convert temperature between Celsius and Fahrenheit.
Code :-
#include <iostream.h>
#include <conio.h>
Void main() {
Clrscr(); // Clear the screen
Float celsius, fahrenheit;
Int choice;
Cout << “Temperature Conversion Menu:\n”;
Cout << “1. Celsius to Fahrenheit\n”;
Cout << “2. Fahrenheit to Celsius\n”;
Cout << “Enter your choice (1 or 2): “;
Cin >> choice;
If(choice == 1) {
Cout << “Enter temperature in Celsius: “;
Cin >> celsius;
Fahrenheit = (celsius * 9 / 5) + 32;
Cout << “\nTemperature in Fahrenheit = “ << fahrenheit;
} else if(choice == 2) {
Cout << “Enter temperature in Fahrenheit: “;
Cin >> fahrenheit;
Celsius = (fahrenheit – 32) * 5 / 9;
Cout << “\nTemperature in Celsius = “ << celsius;
} else {
Cout << “Invalid choice!”;
}
Getch(); // Wait for key press
}