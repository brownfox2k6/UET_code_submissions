#include <string>
using namespace std;

string cut_and_paste(string s, int n) {
  return s.substr(n) + s.substr(0, n);
}
