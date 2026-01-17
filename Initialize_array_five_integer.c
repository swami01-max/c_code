Practical no 2
Aim :- Write a C++ program to initialize an array of 5 integers and calculate the sum of
elements using a pointer.
Code:-
#include <iostream.h>
#include <conio.h>
Void main()
{
 Clrscr(); // Clear the screen
 Int arr[5] = {10, 20, 30, 40, 50}; // Initialize array
 Int *ptr; // Declare pointer
 Int sum = 0, I;
 Ptr = arr; // Point to first element of array
 For(I = 0; I < 5; i++) {
 Sum = sum + *(ptr + i); // Access array elements using pointer
 }
 Cout << “Sum of array elements = “ << sum;
 Getch(); // Wait for key press
}