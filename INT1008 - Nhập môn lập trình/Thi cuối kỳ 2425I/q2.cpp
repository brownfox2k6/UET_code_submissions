#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  
  if (n <= 0 || k <= 0) {
    cout << "INVALID";
    return 0;
  }
  for (int i = 2; ; ++i) {
    if (k % i) {
      cout << i << ' ';
      if (--n == 0) {
        return 0;
      }
    }
  }
}