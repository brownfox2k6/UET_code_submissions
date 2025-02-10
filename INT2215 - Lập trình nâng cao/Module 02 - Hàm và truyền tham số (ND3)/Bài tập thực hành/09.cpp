void sort(float a[], int size, bool isAscending) {
  for (int i = 0; i < size - 1; ++i) {
    for (int j = i+1; j < size; ++j) {
      if ((isAscending && a[j] < a[i]) || (!isAscending && a[j] > a[i])) {
        swap(a[i], a[j]);
      }
    } 
  }
}