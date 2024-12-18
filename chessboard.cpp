#include <iostream>
using namespace std;

void printChessboard(int size) {
    for (int i = 0; i < size; i++) {  // Outer loop for rows
        for (int j = 0; j < size; j++) {  // Inner loop for columns
            // Print '#' for black squares and ' ' for white squares
            if ((i + j) % 2 == 0)
                cout << "#";  // Black square
            else
                cout << " ";  // White square
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int boardSize = 8;  // Size of the chessboard (8x8)

    // Call the function to print the chessboard
    printChessboard(boardSize);

    return 0;
}
