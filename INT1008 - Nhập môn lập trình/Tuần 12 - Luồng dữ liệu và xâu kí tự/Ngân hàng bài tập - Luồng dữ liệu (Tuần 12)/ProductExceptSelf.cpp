#include <iostream>
#include <fstream>
using namespace std;

void productExceptSelf(char *path) {
  ifstream in(path);
  int n;
  in >> n;
  int a[n];
  for (int &x : a) {
    in >> x;
  }

  if (n == 1) { cout << -1; return; }

  for (int i = 0; i < n; ++i) {
    long long prod = 1;
    for (int j = 0; j < n; ++j) {
      if (j != i) {
        prod *= a[j];
      }
    }
    cout << prod << ' ';
  }
}