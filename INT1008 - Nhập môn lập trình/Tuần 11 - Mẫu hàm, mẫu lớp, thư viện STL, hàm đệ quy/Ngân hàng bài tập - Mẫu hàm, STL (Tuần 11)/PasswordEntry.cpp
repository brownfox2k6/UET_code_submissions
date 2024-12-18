#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getCorrectResponse(vector<int> pin, vector<int> num) {
  vector<int> ret;
  for (int x : pin) {
    ret.push_back(num[x]);
  }
  return ret;
}
vector<int> getDigits(unsigned int number) {
  vector<int> ret;
  while (number) {
    ret.push_back(number % 10);
    number /= 10;
  }
  reverse(begin(ret), end(ret));
  return ret;
}

void printDigits(vector<int> digits) {
  for (int i : digits) {
    cout << i;
  }
}