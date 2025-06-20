## Thi cuối kỳ lớp INT2215 1, 7 và 9 - Ca thi 15h30 ngày 20/6/2025
## Đề 01 Lập trình

(Nhớ đề và về nhà viết lại, câu từ có thể không chuẩn nhưng đại ý là như vậy)

### Câu 1
Viết hàm nhận vào xâu ký tự $s$ chỉ gồm những chữ latin thường, trả về ký tự xuất hiện nhiều lần nhất trong $s$. Nếu có nhiều ký tự thoả mãn, trả về ký tự thoả mãn xuất hiện sớm nhất trong $s$.

<details><summary><strong>Cách làm (tóm tắt)</strong></summary>

Dùng một mảng/vector `cnt` có 26 phần tử (vì có 26 ký tự a-z), `cnt[i]` lưu số lần xuất hiện của ký tự `'a' + i` trong `s`. Lưu lại số lần xuất hiện nhiều nhất của một ký tự bằng biến `mx`.
Sau đó duyệt lại từ đầu đến cuối, nếu số lần xuất hiện của ký tự đang xét là nhiều nhất thì trả về ký tự đó. Điều này cũng đảm bảo nếu có nhiều ký tự xuất hiện nhiều nhất thì ký tự trả về là ký tự xuất hiện sớm nhất.
</details>

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

<details><summary><strong>Cách làm (tóm tắt)</strong></summary>

Cần biết đến kỹ thuật mảng cộng dồn (prefix sum). `pref[0] = 0`, `pref[i]` lưu tổng của `a[0]` đến `a[i - 1]`, lấy phần dư khi chia cho `k`.

Suy ra, tổng của `a[l]` đến `a[r]` là `pref[r] - pref[l-1]`. Để tổng này chia hết cho k tức `pref[r] - pref[l-1] = 0`, tương đương `pref[r] = pref[l]`.

Bài toán trở thành: đếm số cặp phần tử bằng nhau trong `pref`.

Ta sử dụng mảng/vector `cnt` có `k` phần tử (vì các phần tử trong `pref` chỉ có thể nhận giá trị từ `0` đến `k-1`). `cnt[i]` lưu lại số lần xuất hiện của `i` trong `pref`. Với mỗi `i`, ta có `cnt[i] * (cnt[i] - 1) / 2` cách chọn ra một cặp.
</details>

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

<details><summary><strong>Cách làm (tóm tắt)</strong></summary>

Để so sánh phân số `F = a/b` với phân số `G = c/d`, ta lấy `F-G = H = (a*d - b*c) / (c*d)`, nếu `H` dương tức là `F > G`. Một phân số là dương khi tử nhân mẫu là dương.
</details>

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

<details><summary><strong>Cách làm (tóm tắt)</strong></summary>

Chạy hai vòng lặp. Vòng lặp đầu tiên để tìm ra giá trị lớn nhất của linked list này. Vòng lặp thứ hai để so sánh tất cả các node của linked list đó với giá trị tìm được ở vòng lặp thứ nhất, nếu bằng thì giảm đi 1 đơn vị. 
</details>

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
