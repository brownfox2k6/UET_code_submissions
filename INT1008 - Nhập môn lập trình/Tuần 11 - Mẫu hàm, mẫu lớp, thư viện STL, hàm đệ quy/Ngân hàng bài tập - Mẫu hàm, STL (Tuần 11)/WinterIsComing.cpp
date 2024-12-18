#include <vector>
#include <algorithm>
using namespace std;

int findRadius(vector<int> houses, vector<int> heaters) {
  sort(begin(houses), end(houses));
  sort(begin(heaters), end(heaters));
  int ret = 0;
  for (int h : houses) {
    auto it = lower_bound(begin(heaters), end(heaters), h);
    int cur = 0x3f3f3f3f;
    if (it != end(heaters)) {
      cur = min(cur, *it - h);
    }
    if (it != begin(heaters)) {
      cur = min(cur, h - *prev(it));
    }
    ret = max(ret, cur);
  }
  return ret;
}