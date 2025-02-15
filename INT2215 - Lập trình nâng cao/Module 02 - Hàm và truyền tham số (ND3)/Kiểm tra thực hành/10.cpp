void sort(float array[], int size, bool isAscending) {
  for (int i = 0; i < size-1; ++i) {
    for (int j = i+1; j < size; ++j) {
      if ((isAscending && array[j] < array[i]) || (!isAscending && array[j] > array[i])) {
        swap(array[i], array[j]);
      }
    }
  }
}