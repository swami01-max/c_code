Aim: Write a program in C++ to perform function overloading using two classes
Code :-
#include <iostream.h>
#include <conio.h>
// First class
Class First {
Public:
Void show(int a) {
Cout << “First class – Number: “ << a << “\n”;
}
Void show(int a, int b) {
Cout << “First class – Sum: “ << a + b << “\n”;
}
};
// Second class
Class Second {
Public:
Void display(char name[]) {
Cout << “Second class – Name: “ << name << “\n”;
}
Void display(char name[], int age) {
Cout << “Second class – Name: “ << name << “, Age: “ << age << “\n”;
}
};
Void main() {
Clrscr(); // Clears screen (specific to Turbo C++)
First f;
Second s;
f.show(10);
f.show(5, 15);
s.display(“john”);
s.display(“john”, 18);
getch(); // Waits for key press
}