#include <iostream>
using namespace std;

signed main() {
  float p;
  cin >> p;

  if (p >= 9) {
    cout << "A+";
  } else if (p >= 8.5) {
    cout << "A";
  } else if (p >= 8) {
    cout << "B+";
  } else if (p >= 7) {
    cout << "B";
  } else if (p >= 6.5) {
    cout << "C+";
  } else if (p >= 5.5) {
    cout << "C";
  } else if (p >= 5) {
    cout << "D+";
  } else if (p >= 4) {
    cout << "D";
  } else {
    cout << "F";
  }
}