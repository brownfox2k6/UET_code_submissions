#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a) {
    cin >> i;
  }
  next_permutation(begin(a), end(a));
  for (int x : a) {
    cout << x << ' ';
  }
}
