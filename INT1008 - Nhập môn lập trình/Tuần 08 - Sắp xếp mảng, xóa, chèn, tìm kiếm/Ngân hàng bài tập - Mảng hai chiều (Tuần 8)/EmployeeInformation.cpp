#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    int gen, age, status;
    cin >> gen >> age >> status;
    if (gen == 0 && age > 30 && status == 1) {
      ++cnt;
    }
  }
  cout << cnt;
}