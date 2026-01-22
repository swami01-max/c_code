Aim:
Write a C++ program to interchange (swap) two numbers using a function with call by value.
Code :-
#include <iostream.h>
#include <conio.h>
// Swap function using call by value
Void swap(int a, int b) {
Int temp;
Temp = a;
A = b;
B = temp;
Cout << “\nInside swap function (after swapping):\n”;
Cout << “a = “ << a << “\n”;
Cout << “b = “ << b << “\n”;
}
Void main()
{
Clrscr(); // Clear screen
Int num1, num2;
Cout << “Enter first number: “;
Cin >> num1;
Cout << “Enter second number: “;
Cin >> num2;
Cout << “\nBefore calling swap function:\n”;
Cout << “num1 = “ << num1 << “\n”;
Cout << “num2 = “ << num2 << “\n”;
Swap(num1, num2); // Call swap using call by value
Cout << “\nAfter calling swap function:\n”;
Cout << “num1 = “ << num1 << “\n”;
Cout << “num2 = “ << num2 << “\n”;
Getch(); // Wait for key press
}