// *************************************************************************** 
// 
//   Your Name 
//   Your Harper ID
//   Your Course and Section Number 
// 
//   I certify that this is my own work and where appropriate an extension 
//   of the starter code provided for the assignment. 
// ***************************************************************************

#include <iostream>
#include "utilsarray.h"
using namespace std;

int main() {
    int* numbers = nullptr;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    // Create the array
    createArray(&numbers, size);

    // Print the array values
    cout << "Array values: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Calculate sum
    int total = sumArray(numbers, size);
    cout << "Sum of array: " << total << endl;

    // Free memory
    delete[] numbers;

    return 0;
}
