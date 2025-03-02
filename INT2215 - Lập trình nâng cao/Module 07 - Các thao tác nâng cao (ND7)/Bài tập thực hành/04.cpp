#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

signed main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;

  // Các số cần tìm là bội của tất cả phần tử trong mảng thứ nhất
  // -> bội của BCNN của mảng thứ nhất
  int lcm_a = a[0];
  for (int x : a) {
    lcm_a = lcm(lcm_a, x);
  }
  // Các số cần tìm là ước của tất cả phần tử trong mảng thứ hai
  // -> ước của ƯCLN của mảng thứ hai
  int gcd_b = b[0];
  for (int x : b) {
    gcd_b = gcd(gcd_b, x);
  }
  int cnt = 0;
  for (int x = lcm_a; x <= gcd_b; x += lcm_a) {
    cnt += gcd_b % x == 0;
  }
  cout << cnt;
}