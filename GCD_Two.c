Aim:
Write a C++ program to find the GCD of two given numbers.
Code :-
#include <iostream.h>
#include <conio.h>
// Function to find GCD using Euclidean algorithm
Int findGCD(int a, int b) {
Int temp;
While(b != 0) {
Temp = b;
B = a % b;
A = temp;
}
Return a;
}
Void main() {
Clrscr(); // Clear screen
Int num1, num2, gcd;
Cout << “Enter first number: “;
Cin >> num1;
Cout << “Enter second number: “;
Cin >> num2;
Gcd = findGCD(num1, num2); // Function call
Cout << “\nGCD of “ << num1 << “ and “ << num2 << “ is: “ << gcd;
Getch(); // Wait for key press
}