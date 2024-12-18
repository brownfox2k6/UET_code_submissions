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
};

int checkArrivalTime(Time t1, Time t2) {
  // your code here
  int t1s = t1.hour * 3600 + t1.minute * 60 + t1.second;
  int t2s = t2.hour * 3600 + t2.minute * 60 + t2.second;
  if (t1s < t2s) return 1;
  else if (t2s < t1s) return -1;
  return 0;
}

int main() {
  int hour, minute, second;
  cin >> hour >> minute >> second;
  Time time1(hour, minute, second);
  cin >> hour >> minute >> second;
  Time time2(hour, minute, second);

  if (checkArrivalTime(time1, time2) == 1)
    cout << "1";
  else if (checkArrivalTime(time1, time2) == -1)
    cout << "2";
  else
    cout << "Equal";

  return 0;
}
