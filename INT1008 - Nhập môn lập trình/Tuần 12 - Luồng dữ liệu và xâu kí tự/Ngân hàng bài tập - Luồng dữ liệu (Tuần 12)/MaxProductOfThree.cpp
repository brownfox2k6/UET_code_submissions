#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int maximumProduct(char* path) {
  ifstream in(path);
  int n;
  in >> n;
  int a[n];
  for (int &x : a) {
    in >> x;
  }
  sort(a, a+n);
  return max({
    a[0] * a[1] * a[2],
    a[0] * a[1] * a[n-1],
    a[0] * a[n-2] * a[n-1],
    a[n-3] * a[n-2] * a[n-1]
  });
}