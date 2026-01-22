Write a C++ program to interchange two numbers using a user-defined function void swap().
Code:-
#include <iostream.h>
#include <conio.h>
// Function to swap two numbers using call by reference
Void swap(int &a, int &b) {
Int temp;
Temp = a;
A = b;
B = temp;
}
Void main() {
Clrscr(); // Clear the screen
Int num1, num2;
Cout << “Enter first number: “;
Cin >> num1;
Cout << “Enter second number: “;
Cin >> num2;
Cout << “\nBefore swapping:\n”;
Cout << “num1 = “ << num1 << “\n”;
Cout << “num2 = “ << num2 << “\n”;
Swap(num1, num2); // Call the swap function
Cout << “\nAfter swapping:\n”;
Cout << “num1 = “ << num1 << “\n”;
Cout << “num2 = “ << num2 << “\n”;
Getch(); // Wait for key press
}