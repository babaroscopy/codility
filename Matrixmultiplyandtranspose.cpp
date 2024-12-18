#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int A[][3], int B[][3], int result[][3], int rowA, int colA, int rowB, int colB) {
    // Multiply matrices A and B
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int A[][3], int transposed[][3], int row, int col) {
    // Transpose of matrix A
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = A[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Define two 3x3 matrices
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int result[3][3];  // Matrix to store the result of multiplication
    int transposed[3][3];  // Matrix to store the transpose

    // Multiply the matrices
    multiplyMatrices(A, B, result, 3, 3, 3, 3);

    cout << "Matrix A:" << endl;
    printMatrix(A, 3, 3);

    cout << "Matrix B:" << endl;
    printMatrix(B, 3, 3);

    cout << "Product of A and B:" << endl;
    printMatrix(result, 3, 3);

    // Transpose matrix A
    transposeMatrix(A, transposed, 3, 3);

    cout << "Transpose of Matrix A:" << endl;
    printMatrix(transposed, 3, 3);

    return 0;
}
