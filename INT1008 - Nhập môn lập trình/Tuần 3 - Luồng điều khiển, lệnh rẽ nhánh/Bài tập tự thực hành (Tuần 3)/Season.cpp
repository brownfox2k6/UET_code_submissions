#include <cmath>
#include <iostream>
using namespace std;

signed main() {
  pair<int, int> p;
  cin >> p.second >> p.first;

  pair<int, int> a[4] = {{6, 21}, {9, 22}, {12, 21}, {3, 20}};
  if (p > a[0] && p <= a[1]) {
    cout << "Summer";
  } else if (p > a[1] && p <= a[2]) {
    cout << "Autumn";
  } else if (p > a[3] && p <= a[0]) {
    cout << "Spring";
  } else {
    cout << "Winter";
  }
}