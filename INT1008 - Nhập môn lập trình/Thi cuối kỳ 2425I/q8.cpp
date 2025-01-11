#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findSubMatrix(int** a, int n) {
  vector<pair<int, int>> v;
  for (int i = 0; i < n-1; ++i) {
    for (int j = 0; j < n-1; ++j) {
      int s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
      if (s == 0 || s == 4) {
        v.emplace_back(i, j);
      }
    }
  }
  sort(begin(v), end(v));
  for (auto [i, j] : v) {
    cout << i << ' ' << j << '\n';
  }
}

void sortBySum(int** a, int n) {
  vector<pair<int, int>> v;
  for (int i = 0; i < n-1; ++i) {
    for (int j = 0; j < n-1; ++j) {
      int s = a[i][j] + a[i+1][j] + a[i][j+1] + a[i+1][j+1];
      if (s == 0 || s == 4) {
        v.emplace_back(i, j);
      }
    }
  }
  sort(begin(v), end(v), [](pair<int, int> a, pair<int, int> b) {
    return a.first + a.second < b.first + b.second;
  });
  for (auto [i, j] : v) {
    cout << i << ' ' << j << '\n';
  }
}