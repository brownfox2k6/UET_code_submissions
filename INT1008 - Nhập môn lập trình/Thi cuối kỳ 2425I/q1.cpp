#include <iostream>
using namespace std;

int main() {
  while (true) {
    int x;
    cin >> x;
    if (x > 0) {
      cout << x << ' ';
      if (x > 50 && x < 100) {
        cout << "YES";
      } else {
        cout << "NO";
      }
      return 0;
    }
  }
}