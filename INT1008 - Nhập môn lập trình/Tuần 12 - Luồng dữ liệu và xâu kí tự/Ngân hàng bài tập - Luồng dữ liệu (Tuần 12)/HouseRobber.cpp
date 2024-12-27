#include <fstream>
using namespace std;

// Hàm đọc dữ liệu từ file
int getMoney(int *houses, char *path) {
  ifstream in(path);
  int cnt = 0;
  while (in >> houses[cnt]) {
    cnt++;
  }
  in.close();
  return cnt;
}

int rob(int *houses, int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return houses[0];

  int prev2 = 0, prev1 = 0, current = 0;
  for (int i = 0; i < n; i++) {
    current = (houses[i] + prev2 > prev1) ? houses[i] + prev2 : prev1;
    prev2 = prev1;
    prev1 = current;
  }
  return current;
}