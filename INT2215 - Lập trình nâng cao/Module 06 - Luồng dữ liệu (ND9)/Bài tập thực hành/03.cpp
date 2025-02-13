#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string path;
  cin >> path;
  ifstream in(path);
  int mn = 2e9;
  int mx = -2e9;
  int sum = 0;
  int count = 0;
  int x;
  while (in >> x) {
    mn = min(mn, x);
    mx = max(mx, x);
    sum += x;
    count++;
  }
  cout << count << ' ' << mn << ' ' << mx << ' ' << sum;
}