
Aim :- Write a C++ program to initialize an array of 10 integers and sort the array in
ascending or descending order using the Bubble Sort method. Display the original and
sorted list.
Code :-
#include <iostream.h>
#include <conio.h>
Void main()
{
 Clrscr();
 Int arr[10] = {45, 12, 89, 33, 2, 77, 50, 10, 5, 70};
 Int I, j, temp, choice;
 // Display original array
 Cout << “Original Array:\n”;
 For(I = 0; I < 10; i++) {
 Cout << arr[i] << “ “;
 }
 // Ask user for sorting order
 Cout << “\n\nEnter 1 for Ascending or 2 for Descending order: “;
 Cin >> choice;
 // Bubble Sort Logic
 For(I = 0; I < 9; i++)
{
 For(j = 0; j < 9 – I; j++)
{
 If((choice == 1 && arr[j] > arr[j + 1]) ||
 (choice == 2 && arr[j] < arr[j + 1]))
{
Temp = arr[j];
 Arr[j] = arr[j + 1];
 Arr[j + 1] = temp;
 }
 }
 }
 // Display sorted array
 Cout << “\nSorted Array:\n”;
 For(I = 0; I < 10; i++)
{
 Cout << arr[i] << “ “;
 }
 Getch();
}