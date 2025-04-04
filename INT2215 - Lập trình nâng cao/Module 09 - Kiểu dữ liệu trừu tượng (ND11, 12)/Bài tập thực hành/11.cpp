BigInt::BigInt() {
  value = "0";
  sign = 1;
}

BigInt::BigInt(const char *str) {
  string s(str);
  if (s[0] == '-') {
    sign = -1;
    s.erase(0, 1);
  } else {
    sign = 1;
    if (s[0] == '+') {
      s.erase(0, 1);
    }
  }
  value = s;
  while (value.length() > 1 && value[0] == '0') {
    value.erase(0, 1);
  }
  if (value == "0") {
    sign = 1;
  }
}

BigInt::BigInt(int num) {
  sign = num < 0 ? -1 : 1;
  value = to_string(num < 0 ? -num : num);
}

BigInt::BigInt(const BigInt &other) : value(other.value), sign(other.sign) {}

ostream &operator<<(ostream &os, const BigInt &b) {
  if (b.sign == -1 && b.value != "0")
    os << "-";
  os << b.value;
  return os;
}

BigInt &BigInt::operator=(int num) {
  *this = BigInt(num);
  return *this;
}

BigInt &BigInt::operator=(const char *str) {
  *this = BigInt(str);
  return *this;
}

BigInt &BigInt::operator=(const BigInt &other) {
  if (this != &other) {
    value = other.value;
    sign = other.sign;
  }
  return *this;
}

BigInt operator+(const BigInt &a, const BigInt &b) {
  BigInt result;
  if (a.sign == b.sign) {
    result.sign = a.sign;
    string res;
    int carry = 0, i = a.value.size() - 1, j = b.value.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
      int sum = carry;
      if (i >= 0)
        sum += a.value[i--] - '0';
      if (j >= 0)
        sum += b.value[j--] - '0';
      carry = sum / 10;
      res += (sum % 10) + '0';
    }
    reverse(res.begin(), res.end());
    result.value = res;
  } else {
    bool absLess = (a.value.length() != b.value.length())
                       ? (a.value.length() < b.value.length())
                       : (a.value < b.value);
    const string &big = absLess ? b.value : a.value;
    const string &small = absLess ? a.value : b.value;
    int signBig = absLess ? b.sign : a.sign;
    string res;
    int carry = 0, i = big.size() - 1, j = small.size() - 1;
    while (i >= 0) {
      int sub = (big[i] - '0') - carry;
      if (j >= 0)
        sub -= (small[j--] - '0');
      if (sub < 0) {
        sub += 10;
        carry = 1;
      } else {
        carry = 0;
      }
      res += sub + '0';
      i--;
    }
    while (res.size() > 1 && res.back() == '0') {
      res.pop_back();
    }
    reverse(res.begin(), res.end());
    result.value = res;
    result.sign = signBig;
  }
  if (result.value == "0") {
    result.sign = 1;
  }
  return result;
}

BigInt operator+(const BigInt &a, int b) { return a + BigInt(b); }

BigInt operator+(int a, const BigInt &b) { return BigInt(a) + b; }

BigInt operator-(const BigInt &a, const BigInt &b) {
  BigInt negB = b;
  negB.sign *= -1;
  return a + negB;
}

BigInt operator-(const BigInt &a, int b) { return a - BigInt(b); }

BigInt operator-(int a, const BigInt &b) { return BigInt(a) - b; }

BigInt &BigInt::operator+=(int b) {
  *this = *this + b;
  return *this;
}

BigInt &BigInt::operator+=(const BigInt &b) {
  *this = *this + b;
  return *this;
}

BigInt &BigInt::operator-=(int b) {
  *this = *this - b;
  return *this;
}

BigInt &BigInt::operator-=(const BigInt &b) {
  *this = *this - b;
  return *this;
}