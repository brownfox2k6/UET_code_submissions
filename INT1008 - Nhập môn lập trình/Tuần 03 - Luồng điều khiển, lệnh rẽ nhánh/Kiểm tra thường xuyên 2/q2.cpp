#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  int ok = 0;
  if (x % 3 == 0) {
    ++ok;
    cout << "bingo dk1\n";
  } else {
    cout << "sai dk1\n";
  }

  if (x % 5 == 1) {
    ++ok;
    cout << "bingo dk2\n";
  } else {
    cout << "sai dk2\n";
  }

  if (ok == 2) {
    cout << "bingo!!!";
  }
}