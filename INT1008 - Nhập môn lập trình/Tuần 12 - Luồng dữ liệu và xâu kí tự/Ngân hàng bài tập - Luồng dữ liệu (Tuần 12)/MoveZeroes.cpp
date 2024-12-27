#include <iostream>
#include <fstream>
using namespace std;

void moveZeroes(int* a, char* file) {
  ifstream in(file);
  int n;
  in >> n;
  a = new int[n];
  int k = 0;
  for (int i = 0; i < n; ++i) {
    in >> a[i];
    if (a[i]) {
      a[k++] = a[i];
    }
  }
  for ( ; k < n; ++k) {
    a[k] = 0;
  }
  for (int i = 0; i < n; ++i) {
    cout << a[i] << ' ';
  }
}