#include <iostream>
using namespace std;

void readArray(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
}

void printArray(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << a[i] << ' ';
  }
}