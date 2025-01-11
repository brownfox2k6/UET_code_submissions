#include <iostream>
using namespace std;

int main() {
  int n, total = 0, count = 0;
  for (cin >> n; n--; ) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      cout << x << ' ';
      ++count;
      total += x;
    }
  }
  if (count) {
    cout << '\n' << total;
  }
}