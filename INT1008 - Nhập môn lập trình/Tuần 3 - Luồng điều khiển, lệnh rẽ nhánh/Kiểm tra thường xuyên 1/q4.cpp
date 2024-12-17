#include <iostream>
using namespace std;

int main() {
  double x;
  cin >> x;

  if (x < 63 || x > 107) {
    cout << "Sorry, we don't have your size!";
  } else if (x < 68) {
    cout << 30;
  } else if (x < 73) {
    cout << 32;
  } else if (x < 78) {
    cout << 34;
  } else if (x < 83) {
    cout << 36;
  } else if (x < 88) {
    cout << 38;
  } else if (x < 93) {
    cout << 40;
  } else if (x < 98) {
    cout << 42;
  } else if (x < 103) {
    cout << 44;
  } else {
    cout << 46;
  }
}