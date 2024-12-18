#include <iostream>
using namespace std;

int** inputMatrix(int nRows, int nCols) {
  int** mat = new int*[nRows];
  for (int i = 0; i < nRows; ++i) {
    mat[i] = new int[nCols];
    for (int j = 0; j < nCols; ++j) {
      cin >> mat[i][j];
    }
  }
  return mat;
}

void printMatrix(int** matrix, int nRows, int nCols) {
  for (int i = 0; i < nRows; ++i) {
    for (int j = 0; j < nCols; ++j) {
      cout << matrix[i][j] << ' ';
    }
    cout << '\n';
  }
}