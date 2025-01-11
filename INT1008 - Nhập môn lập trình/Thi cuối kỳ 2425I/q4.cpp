#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int cnt[26] = {0};
  for (size_t i = 0; i < s.length(); ++i) {
    ++cnt[s[i] - 'a']; 
  }
  for (int i = 0; i < 26; ++i) {
    if (cnt[i]) {
      cout << char(i + 'a') << ": " << cnt[i] << '\n';
    }
  }
}