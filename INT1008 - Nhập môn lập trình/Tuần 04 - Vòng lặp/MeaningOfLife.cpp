// Ý nghĩa cuộc sống

#include <iostream>
using namespace std;

signed main() {
  int n;
  for (cin >> n; n--; ) {
    int x;
    cin >> x;
    if (x == 42) {
      cout << "I've found the meaning of life!";
      return 0;
    }
  }
  cout << "It's a joke!";
}