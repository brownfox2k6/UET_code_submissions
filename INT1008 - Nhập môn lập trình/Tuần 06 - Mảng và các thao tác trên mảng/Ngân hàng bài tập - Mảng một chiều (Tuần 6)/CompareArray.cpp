#include <iostream>
using namespace std;

void readArray(int array[], int n) {
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }
}

bool compareArray(int a[], int b[], int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}