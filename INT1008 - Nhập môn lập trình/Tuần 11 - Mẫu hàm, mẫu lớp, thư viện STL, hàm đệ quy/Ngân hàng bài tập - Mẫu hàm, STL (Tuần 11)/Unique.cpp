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
  sort(begin(a), end(a));
  auto it = unique(begin(a), end(a));
  cout << it - begin(a); 
}
