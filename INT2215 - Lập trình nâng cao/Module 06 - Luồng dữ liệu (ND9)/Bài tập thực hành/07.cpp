#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string path;
  cin >> path;
  ifstream in(path);
  int n;
  in >> n;
  vector<int> a(n);
  for (int &x : a) {
    in >> x;
  }

  sort(begin(a), end(a));
  cout << a[n/2];
}