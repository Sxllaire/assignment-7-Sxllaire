//*************************************************************
//
//Danil Alieinikov
//H00880905
//CSC122-01
//
//I certify that this is my work and where appropriate an extension
//of the starter code provided by the assignment
//*************************************************************

#include "utilsarray.h"

// Sum values in an array
int sumArray(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Allocate array and fill it with numbers
void createArray(int** arr, int size) {
    *arr = new int[size]; // allocate memory
    for (int i = 0; i < size; i++) {
        (*arr)[i] = (i + 1) * 10; // fill with values like 10, 20, 30, ...
    }
}
