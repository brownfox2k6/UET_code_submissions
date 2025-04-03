int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2) {
  int *arr = new int[lenArr1 + lenArr2];
  int i(0), j(0), k(0);
  bool decr = (lenArr1 > 1 && firstArr[0] > firstArr[1]) ||
              (lenArr2 > 1 && secondArr[0] > secondArr[1]);
  while (i < lenArr1 && j < lenArr2)
    arr[k++] = decr ^ (firstArr[i] < secondArr[j]) ? firstArr[i++] : secondArr[j++];
  while (i < lenArr1) arr[k++] = firstArr[i++];
  while (j < lenArr2) arr[k++] = secondArr[j++];
  return arr;
}