#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ret = 0;
  for (int i = 1; i <= n; ++i) {
    if (i == 1) {
      ret += 7;
    } else if (i <= 30) {
      ret += 5;
    } else {
      ret += 3;
    }
  }

  cout << ret * 1000;
}