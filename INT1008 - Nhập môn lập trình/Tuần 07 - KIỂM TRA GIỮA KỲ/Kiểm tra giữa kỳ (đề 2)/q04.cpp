// 24021400 Nguyen Trong Dai
// q04.cpp

#include <iostream>
using namespace std;

void couplesOfNumbers(int a[], int n) {
  bool ok = false;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i != j && a[i] % a[j] == 0) {
        ok = true;
        cout << a[i] << ' ' << a[j] << '\n';
      }
    }
  }
  if (!ok) {
    cout << "Khong ton tai cap so";
  }
}

/*
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  couplesOfNumbers(a, n);
}
*/
