// Write a C++ program to overload the '+' operator so that it can add two matrices.

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int** data; // Pointer to hold matrix data

public:
    // Constructor to initialize matrix with given rows and columns
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = 0; // Initialize elements to zero
            }
        }
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Method to input matrix elements
    void input() {
        cout << "Enter elements for " << rows << "x" << cols << " matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    // Method to display matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overload '+' operator to add two matrices
    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix dimensions do not match for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    // Define dimensions for the matrices
    int rows = 2, cols = 2;

    // Create two matrices
    Matrix mat1(rows, cols);
    Matrix mat2(rows, cols);

    // Input matrix elements
    cout << "Matrix 1:" << endl;
    mat1.input();

    cout << "Matrix 2:" << endl;
    mat2.input();

    try {
        // Add matrices using overloaded '+' operator
        Matrix result = mat1 + mat2;

        // Display the result
        cout << "Resultant Matrix after addition:" << endl;
        result.display();
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
