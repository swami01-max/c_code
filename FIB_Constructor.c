Aim :- Write a program in C++ using OOP to create a class Fib with constructor, destructor, and a member function void genfib(). Print a message when the object is created and when it is destroyed.
Code:-
#include <iostream.h>
#include <conio.h>
Class Fib {
Public:
// Constructor
Fib() {
Cout << “OBJECT IS BORN\n”;
}
// Member function to generate Fibonacci series
Void genfib() {
Int a = 0, b = 1, c, I;
Cout << “Fibonacci series (first 10 terms):\n”;
Cout << a << “ “ << b << “ “;
For(I = 3; I <= 10; i++) {
C = a + b;
Cout << c << “ “;
A = b;
B = c;
}
Cout << “\n”;
}
// Destructor
~Fib() {
Cout << “OBJECTS ARE DESTROYED…\n”;
}
};
Void main() {
Clrscr(); // Clear screen
Fib f; // Object creation – Constructor is called
f.genfib(); // Generate Fibonacci series
getch(); // Wait for key press – Destructor called after this
}