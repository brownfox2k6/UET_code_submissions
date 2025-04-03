int** transpose(int** matrix, int nRows, int nCols) {
  int** transposed = new int*[nCols];
  for (int i = 0; i < nCols; ++i) {
    transposed[i] = new int[nRows];
    for (int j = 0; j < nRows; ++j) {
      transposed[i][j] = matrix[j][i];
    }
  }
  return transposed;
}