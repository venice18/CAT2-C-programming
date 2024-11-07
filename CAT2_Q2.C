#include<stdio.h>


int main() {
    // i. Define an array data structure (concept explanation in comment)
    // An array is a data structure that can hold multiple values of the same data type in a single variable.
    // In C, arrays are used to store a collection of data, like integers, floats, or other data types.

    // ii. Declare and initialize a 2D array named 'scores' with 2 rows and 2 columns
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    // iii. Print the elements of the above array using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
        
    }

    return 0;
