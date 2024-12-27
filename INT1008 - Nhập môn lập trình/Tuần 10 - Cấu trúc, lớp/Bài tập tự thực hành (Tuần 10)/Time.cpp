#include <iostream>
using namespace std;

struct Time {
  int hour, minute, second;
  Time(int initHour, int initMinute, int initSecond) {
    // your code here
    hour = initHour;
    minute = initMinute;
    second = initSecond;
  }
  void getTimeDifference(Time other) {
    // your code here
    int t1s = 3600 * this->hour + 60 * this->minute + this->second;
    int t2s = 3600 * other.hour + 60 * other.minute + other.second;
    int diff = abs(t1s - t2s);
    int h = diff / 3600;
    int m = (diff % 3600) / 60;
    int s = diff % 60;
    if (h < 10) cout << 0;
    cout << h << ':';
    if (m < 10) cout << 0;
    cout << m << ':';
    if (s < 10) cout << 0;
    cout << s;
  }
};

int main() {
  int hour, minute, second;
  cin >> hour >> minute >> second;
  Time time1(hour, minute, second);
  cin >> hour >> minute >> second;
  Time time2(hour, minute, second);
  time1.getTimeDifference(time2);

  return 0;
}
