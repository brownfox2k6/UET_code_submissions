bool* isHigher(int* arr, int num, int thres) {
  bool* ret = new bool[num];
  for (int i = 0; i < num; ++i) {
    ret[i] = arr[i] >= thres;
  }
  return ret;
}