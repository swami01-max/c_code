Aim:
Write a C++ program to initialize an array of 10 integers and verify whether a given number is present in the array or not using linear search.
Code:-
#include <iostream.h>
#include <conio.h>
Void main() {
Clrscr(); // Clear screen
Int arr[10] = {23, 45, 12, 78, 34, 89, 56, 10, 67, 90};
Int num, I, found = 0;
Cout << “Enter a number to search: “;
Cin >> num;
// Linear Search
For(I = 0; I < 10; i++) {
If(arr[i] == num) {
Found = 1;
Break;
}
}
If(found == 1) {
Cout << “\nThe number “ << num << “ is found in the array.”;
} else {
Cout << “\nThe number “ << num << “ is NOT found in the array.”;
}
Getch(); // Wait for key press
}
