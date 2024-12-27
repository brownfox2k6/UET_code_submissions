#include <iostream>
using namespace std;

template<class T>
void printStatistics(T a[], int n) {
  T mx = a[0];
  T mn = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i] > mx) mx = a[i];
    if (a[i] < mn) mn = a[i];
  }
  cout << mx << ' ' << mn << '\n';
}