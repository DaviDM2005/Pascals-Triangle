# C++ Pascal's Triangle Generator

This C++ program generates Pascal's Triangle up to a specified number of rows. Pascal's Triangle is a mathematical construct where each number is the sum of the two numbers directly above it in the previous row.

## Pascal's Triangle Generation

The program prompts the user to enter the number of rows (levels) they want to generate in Pascal's Triangle. It then uses nested loops to generate and print the triangle.

### Steps:

1. Prompt the user to enter the number of rows.
2. Use nested loops to generate each row of Pascal's Triangle.
3. Calculate the values in each row using the binomial coefficient formula (n choose k).
4. Print the generated Pascal's Triangle.

## Usage

The `main` function contains the code for generating and printing Pascal's Triangle based on user input.

### Example Usage:

```cpp
#include <iostream>
using namespace std;

int main() {
    int row;

    // Prompt the user to enter the number of rows
    cout << "Enter rows: ";
    cin >> row;

    for (int line = 1; line <= row; line++) {
        int k = 1;  

        // Print spaces for formatting
        for (int dashoreba = 1; dashoreba <= row - line; dashoreba++) {
            cout << "  ";
        }

        // Calculate and print the values in each row
        for (int i = 1; i <= line; i++) {
            cout << k << "   ";
            k = k * (line - i) / i;
        }

        cout << endl; 
    }

    return 0;
}
