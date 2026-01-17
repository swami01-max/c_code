Aim:
Write a C++ program to verify whether a given element belongs to a sorted array using the 
binary search technique.
Code :-
#include <iostream.h>
#include <conio.h>
Void main()
{
 Clrscr();
 Int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50}; // Sorted array
 Int low = 0, high = 9, mid, num, found = 0;
 Cout << “Enter number to search: “;
 Cin >> num;
 While (low <= high) {
 Mid = (low + high) / 2;
 If (arr[mid] == num) {
 Found = 1;
 Break;
 } else if (num < arr[mid]) {
 High = mid – 1;
 } else {
 Low = mid + 1;
 }
 }
 If (found == 1) {
 Cout << “\nThe number “ << num << “ is FOUND in the array.”;
} else {
 Cout << “\nThe number “ << num << “ is NOT FOUND in the array.”;
 }
 Getch(); // Wait for key press
}
