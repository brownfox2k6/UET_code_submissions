int** transpose(int** matrix, int m, int n) {
  int** ret = new int*[n];
  for (int i = 0; i < n; ++i) {
    ret[i] = new int[m];
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      ret[j][i] = matrix[i][j];
    }
  }
  return ret;
}