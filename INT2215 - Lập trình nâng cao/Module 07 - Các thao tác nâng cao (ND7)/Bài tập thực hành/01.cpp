#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int &x : a) cin >> x;

  int lo = 0;
  int hi = n-1;
  while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (a[mid] == x) {
      cout << "YES";
      return 0;
    } else if (a[mid] < x) {
      lo = mid + 1;
    } else {
      hi = mid - 1;
    }
  }
  cout << "NO";
}