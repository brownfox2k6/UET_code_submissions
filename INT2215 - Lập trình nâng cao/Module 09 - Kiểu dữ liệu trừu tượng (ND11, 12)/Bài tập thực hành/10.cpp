class Time {
private:
  int h, m, s, ss;
public:
  Time(int _h = 0, int _m = 0, int _s = 0) {
    ss = _h * 3600 + _m * 60 + _s;
    h = ss / 3600;
    m = (ss % 3600) / 60;
    s = ss % 60;
  }
  friend ostream& operator<<(ostream &os, const Time &t) {
    if (t.h < 10) {
      os << '0';
    }
    os << t.h << ':';
    if (t.m < 10) {
      os << '0';
    }
    os << t.m << ':';
    if (t.s < 10) {
      os << '0';
    }
    os << t.s;
    return os;
  }
  bool operator<(Time other) { return ss < other.ss; }
  bool operator>(Time other) { return ss > other.ss; }
  bool operator<=(Time other) { return ss <= other.ss; }
  bool operator>=(Time other) { return ss >= other.ss; }
  bool operator==(Time other) { return ss == other.ss; }
  bool operator!=(Time other) { return ss != other.ss; }
  int hour() { return h; }
  int minute() { return m; }
  int second() { return s; }
};