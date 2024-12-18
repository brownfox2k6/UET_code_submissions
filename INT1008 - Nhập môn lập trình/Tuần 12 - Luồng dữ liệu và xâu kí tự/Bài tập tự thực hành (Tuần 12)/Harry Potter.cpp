#include <vector>
#include <string>
using namespace std;

vector<int> freq(string s) {
  vector<int> ret(26, 0);
  for (char c : s) {
    if ('A' <= c && c <= 'Z') {
      ++ret[c - 'A'];
    } else {
      ++ret[c - 'a'];
    }
  }
  return ret;
}

bool areAnagrams(string s1, string s2) {
  return freq(s1) == freq(s2);
}
