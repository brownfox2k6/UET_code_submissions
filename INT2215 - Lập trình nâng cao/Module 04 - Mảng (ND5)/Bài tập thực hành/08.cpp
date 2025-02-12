#include <iostream>
using namespace std;

signed main() {
  long long n;
  cin >> n;

  // dùng do-while vì nếu dùng while thì
  // count=0 khi n=0 -> sai
  int count = 0;
  do {
    ++count;
    n /= 10;
  } while (n);
  cout << count;
}