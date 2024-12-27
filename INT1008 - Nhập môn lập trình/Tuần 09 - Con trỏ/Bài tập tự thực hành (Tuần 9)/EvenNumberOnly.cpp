int** keepEven(int** matrix, int nRows, int nCols) {
  int** ret = new int*[nRows];
  for (int i = 0; i < nRows; ++i) {
    ret[i] = new int[nCols];
    for (int j = 0; j < nCols; ++j) {
      ret[i][j] = matrix[i][j] % 2? 0 : matrix[i][j];
    }
  }
  return ret;
}