#include <iostream>
using namespace std;

int* getPointerToArray(int n) {
  int* ret = new int[n];
  for (int i = 0; i < n; ++i) {
    cin >> ret[i];
  }
  return ret;
}