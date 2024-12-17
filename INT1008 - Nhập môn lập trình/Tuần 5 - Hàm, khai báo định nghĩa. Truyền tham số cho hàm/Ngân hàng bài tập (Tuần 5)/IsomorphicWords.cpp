#include <map>
#include <string>
using namespace std;

bool isIsomorphic(string a, string b) {
  int n = a.length();
  int m = b.length();
  if (n != m) {
    return false;
  }
  map<char, char> ma, mb;
  for (int i = 0; i < n; ++i) {
    if (ma.count(a[i]) && ma[a[i]] != b[i]) {
      return false;
    }
    if (mb.count(b[i]) && mb[b[i]] != a[i]) {
      return false;
    }
    ma[a[i]] = b[i];
    mb[b[i]] = a[i];
  }
  return true;
}