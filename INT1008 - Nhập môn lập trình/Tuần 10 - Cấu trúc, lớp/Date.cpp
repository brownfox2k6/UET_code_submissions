#include <iostream>
using namespace std;

struct date {
  int day, month, year;
};

/// Hàm tính và trả về ngày kế tiếp của ngày hiện tại
/// Hàm không làm thay đổi giá trị của ngày hiện tại
date getNextDay(const date &d) {
  // them code cua ban o day
  if (d.day == 31 && d.month == 12) {
    return {1, 1, d.year + 1};
  }
  int mx;
  if (d.month == 2) {
    bool leap = (d.year % 4 == 0 && d.year % 100) || d.year % 400 == 0;
    mx = leap ? 29 : 28;
  } else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
    mx = 30;
  } else {
    mx = 31;
  }
  if (d.day == mx) {
    return {1, d.month + 1, d.year};
  } else if (d.day < mx) {
    return {d.day + 1, d.month, d.year};
  } else {
    return {-1, -1, -1};
  }
}

int main() {
  // them code cua ban o day
  date d;
  char c;
  cin >> d.day >> c >> d.month >> c >> d.year;
  date nxt = getNextDay(d);
  if (nxt.day == -1) {
    cout << "INVALID";
  } else {
    if (nxt.day < 10) {
      cout << 0;
    }
    cout << nxt.day << c;
    if (nxt.month < 10) {
      cout << 0;
    }
    cout << nxt.month << c << nxt.year;
  }
}
