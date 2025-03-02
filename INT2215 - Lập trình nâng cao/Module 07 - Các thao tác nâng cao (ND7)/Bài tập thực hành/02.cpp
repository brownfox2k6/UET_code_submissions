#include <cmath>

vector<int> listSquare(int a, int b) {
  vector<int> v;
  for (int i = ceil(sqrt(a)); i*i <= b; ++i) {
    v.emplace_back(i * i);
  }
  return v;
}

// code hàm main bị lỗi?