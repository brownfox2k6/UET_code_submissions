## Thi cuối kỳ lớp INT2215 1, 7 và 9 - Ca thi 15h30 ngày 20/6/2025
## Đề 01 Lập trình

(Nhớ đề và về nhà viết lại, câu từ có thể không chuẩn nhưng đại ý là như vậy)

### Câu 1
Viết hàm nhận vào xâu ký tự $s$ chỉ gồm những chữ latin thường, trả về ký tự xuất hiện nhiều lần nhất trong $s$. Nếu có nhiều ký tự thoả mãn, trả về ký tự thoả mãn xuất hiện sớm nhất trong $s$.

<details><summary><strong>Code (C++)</strong></summary>

```cpp
char mostFrequentChar(string s) {
  vector<int> cnt(26, 0);
  int mx = 0;
  for (char c : s) {
    mx = max(mx, ++cnt[c - 'a']);
  }
  for (char c : s) {
    if (cnt[c - 'a'] == mx) {
      return c;
    }
  }
  return '!';  // khong bao gio chay duoc vao day
}
```
</details>

### Câu 2
Viết chương trình: Cho một mảng $a$ có $n$ phần tử, đếm xem trong mảng $a$ có bao nhiêu đoạn con liên tiếp có tổng chia hết cho $k$.

<details><summary><strong>Code (C++)</strong></summary>

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> pref(n+1, 0);
  for (int i = 0; i < n; ++i) {
    cin >> pref[i];
    pref[i] = (pref[i] + pref[i-1]) % k;
  }
  vector<int> cnt(k, 0);
  for (int x : pref) {
    ++cnt[x];
  }
  int ans = 0;
  for (int x : cnt) {
    ans += x * (x - 1);
  }
  cout << ans / 2;
}
```
</details>

### Câu 3
Tạo struct/class `Fraction` có hàm `greater()`, trả về true nếu phân số hiện tại lớn hơn

<details><summary><strong>Code (C++)</strong></summary>

```cpp
#define ll long long

struct Fraction {
  ll x, y;
  Fraction() {}
  Fraction(ll _x, ll _y) {
    x = _x;
    y = _y;
  }
  bool greater(Fraction other) {
    ll a = x * other.y - y * other.x;
    ll b = y * other.y;
    return a * b > 0;
  }
};
```
</details>

### Câu 4
Viết hàm nhận vào node đầu tiên của danh sách liên kết và giảm tất cả các node có giá trị lớn nhất đi một đơn vị.

<details><summary><strong>Code (C++)</strong></summary>

```cpp
struct Element {
  int data;
  Element *next;
};

void decreaseMax(Element *head) {
  int mx = -2e9;
  for (Element *p = head; p; p = p->next) {
    mx = max(mx, p->data);
  }
  for (Element *p = head; p; p = p->next) {
    if (p->data == mx) {
      --(p->data);
    }
  }
}
```
</details>
