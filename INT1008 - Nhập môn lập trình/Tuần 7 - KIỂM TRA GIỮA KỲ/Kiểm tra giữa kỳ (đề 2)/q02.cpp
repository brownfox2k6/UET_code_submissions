// 24021400 Nguyen Trong Dai
// q02.cpp

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
  double a[5];
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
  }

  cout << fixed << setprecision(2);
  cout << *max_element(a, a+5) << ' ';
  cout << *min_element(a, a+5) << ' ';
  cout << accumulate(a, a+5, 0.0) / 5;
}
