MyString::MyString() {
  len = 0;
  str = new char[1];
  str[0] = '\0';
}

MyString::MyString(const char *s) {
  for (int i = 0; ; ++i) {
    if (s[i] == '\0') {
      len = i;
      break;
    }
  }
  str = new char[len + 1];
  for (int i = 0; i < len; ++i) {
    str[i] = s[i];
  }
  str[len] = '\0';
}

MyString::MyString(const MyString &s) {
  len = s.len;
  str = new char[len + 1];
  for (int i = 0; i < len; ++i) {
    str[i] = s[i];
  }
  str[len] = '\0';
}

MyString::~MyString() {
  delete[] str;
}

MyString MyString::operator=(const MyString &s) {
  if (this != &s) {
    *this = MyString(s);
  }
  return *this;
}

MyString MyString::operator=(const char *s) {
  *this = MyString(s);
  return *this;
}

MyString MyString::operator+=(const MyString &s) {
  char *res = new char[len + s.len + 1];
  for (int i = 0; i < len + s.len; ++i) {
    if (i < len) {
      res[i] = str[i];
    } else {
      res[i] = s.str[i - len];
    }
  }
  res[len + s.len] = '\0';
  delete[] str;
  str = res;
  len += s.len;
  return *this;
}

char &MyString::operator[](unsigned int index) {
  return str[index];
}

const char &MyString::operator[](unsigned int index) const {
  return str[index];
}

int MyString::size() {
  return len;
}

MyString MyString::upper() const {
  MyString s(*this);
  for (int i = 0; i < len; ++i) {
    if ('a' <= s[i] && s[i] <= 'z') {
      s[i] -= 32;
    }
  }
  return s;
}

MyString MyString::lower() const {
  MyString s(*this);
  for (int i = 0; i < len; ++i) {
    if ('A' <= s[i] && s[i] <= 'Z') {
      s[i] += 32;
    }
  }
  return s;
}

ostream &operator<<(ostream &os, const MyString &s) {
  os << s.str;
  return os;
}

MyString operator+(const MyString &a, const MyString &b) {
  MyString s(a);
  s += b;
  return s;
}

bool operator<(const MyString &a, const MyString &b) { return a.str < b.str; }
bool operator>(const MyString &a, const MyString &b) { return a.str > b.str; }
bool operator<=(const MyString &a, const MyString &b) { return a.str <= b.str; }
bool operator>=(const MyString &a, const MyString &b) { return a.str >= b.str; }
bool operator==(const MyString &a, const MyString &b) { return a.str == b.str; }
bool operator!=(const MyString &a, const MyString &b) { return a.str != b.str; }