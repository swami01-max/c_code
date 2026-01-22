Aim:
Write a C++ program to reverse a string.
Code :-
#include <iostream.h>
#include <conio.h>
#include <string.h>
Void main() {
Clrscr(); // Clear screen
Char str[100];
Int len, I;
Cout << “Enter a string: “;
Cin >> str;
Len = strlen(str);
Cout << “Reversed string: “;
For(I = len – 1; I >= 0; i--) {
Cout << str[i];
}
Getch(); // Wait for key press
}