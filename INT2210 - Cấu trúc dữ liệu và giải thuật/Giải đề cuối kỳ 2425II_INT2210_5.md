# Giải đề thi cuối kỳ - Cấu trúc dữ liệu và giải thuật (2425II_INT2210_5)
- Thời gian làm bài: **90 phút**
- 8 câu

## Câu 1 `(1 điểm)`
Hãy tính độ phức tạp của đoạn mã sau theo $n$, giải thích kết quả.
```cpp
for (int i = 1; 2*i <= n; ) {
    int j = 2*i;
    if ((j < n) && (a[j] < a[j+1])) j++;
    if (a[i] < a[j]) {
        int tmp = a[j]; a[j] = a[i]; a[i] = tmp;
        i = j;
    } else i += n;
}
```

<details><summary>Bài giải</summary>
  
Ta thấy `i` bắt đầu chạy từ `1`, sau mỗi vòng lặp, `i` có thể nhận giá trị mới là `2*i`, `2*i + 1` hoặc `i+n`. Trong trường hợp tệ nhất, coi như `i` tăng gấp đôi sau mỗi vòng lặp. Vậy độ phức tạp của đoạn mã là $\mathcal{O}(\log n)$.
</details>

## Câu 2 `(1 điểm)`
Cho một cấu trúc ngăn xếp với các thao tác cơ bản `push()`, `pop()`, `isEmpty()`. Hãy cài đặt một thao tác lấy ra phần tử thứ $k$ tính từ đỉnh ngăn xếp (đỉnh ngăn xếp là phần tử thứ nhất) và trả lại ngăn xếp với thứ tự các phần tử còn lại không thay đổi.

<details><summary>Bài giải</summary>

Gọi ngăn xếp đang thao tác là `st`, ta sử dụng thêm một ngăn xếp phụ là `tmp` và thực hiện các bước sau:
- Bước 1: Lần lượt lấy $k-1$ phần tử đầu tiên của `st` chuyển vào `tmp`;
- Bước 2: Lúc này, phần tử đầu tiên của `st` chính là phần tử thứ `k` của ngăn xếp ban đầu, lưu lại và xoá đi phần tử này;
- Bước 3: Lần lượt chuyển lại các phần tử của `tmp` vào `st`.

Ta cần chú ý xử lý báo lỗi khi truy xuất hoặc lấy ra đỉnh ngăn xếp trong khi ngăn xếp rỗng.

**Cài đặt**
```cpp
Data popKthElement(Stack &st) {
    Stack tmp;
    for (int i = 0; i < k-1; ++i) {
        if (st.isEmpty()) throw Error;
        tmp.push(st[0]);
        st.pop();
    }
    if (st.isEmpty()) throw Error;
    Data data = st[0];
    st.pop();
    for (int i = 0; i < k-1; ++i) {
        st.push(tmp[0]);
        tmp.pop();
    }
    return data;
}
```
</details>

## Câu 3 `(1 điểm)`
**a.** Cho heap max nhị phân hiện nằm trong mảng có giá trị lần lượt là `10 9 7 4 3 6`. Hãy minh hoạ từng bước quá trình thêm key `12` vào heap.

**b.** Cho heap max nhị phân hiện nằm trong mảng có giá trị lần lượt là `10 9 7 4 3 6`. Hãy minh hoạ từng bước quá trình lấy key lớn nhất ra khỏi heap.

<details><summary>Bài giải</summary>

**a.**

![image](https://github.com/user-attachments/assets/f831a0e5-3705-4e97-abec-b6fe53184b64)

**b.**

![image](https://github.com/user-attachments/assets/178a8976-9c53-499b-8daf-620a23448cf6)
</details>

## Câu 4 `(1,5 điểm)`
**a.** Hãy vẽ cây tìm kiếm nhị phân mà bạn thu được sau khi thêm chuỗi khoá `30 50 40 10 120 60 100 80` lần lượt vào một cây ban đầu chỉ có một phần tử là `90`. Chỉ cần vẽ cây kết quả.

**b.** Thực hiện với dữ liệu trên để tạo cây tìm kiếm nhị phân cân bằng AVL. Vẽ các bước trung gian để thấy được việc xoay cây nếu có.

<details><summary>Bài giải</summary>

**a.**

![image](https://github.com/user-attachments/assets/6492b463-5f09-4b8e-9e3e-01bfe997a910)

**b.**

![image](https://github.com/user-attachments/assets/88e3fc91-bfd3-48d6-aabc-aa2430d2d7e3)
</details>

## Câu 5 `(1,5 điểm)`
Cho một hàm băm $h(x) = x \bmod 13$. Hãy tạo bảng băm kích thước $13$ với chuỗi các khoá theo thứ tự sau `27, 42, 57, 84, 40, 13, 67, 86, 94, 20, 60, 10, 48` bằng hai phương pháp:

**a.** Bằng phương pháp chuỗi tách biệt

**b.** Bằng phương pháp địa chỉ mở

<details><summary>Bài giải</summary>

Ta có bảng sau:

![image](https://github.com/user-attachments/assets/fe9852f2-5bdf-4d17-b886-54787bf50d63)

**a.** Ta coi mỗi phần tử trong bảng băm là một danh sách liên kết, khi ghi một phần tử vào một ô tức là ta mở rộng danh sách liên kết tại ô đó.

![image](https://github.com/user-attachments/assets/477f1f5e-0aa1-43d8-bba9-d816a85e78ff)

**b.** Nếu ô cần ghi đang trống thì ghi ngay vào ô đó. Ngược lại, ta liên tục đi sang phải cho đến khi gặp ô trống, nếu đã đi đến ô cuối cùng bên phải thì quay lại ô đầu tiên và tìm kiếm tiếp, sau đó ghi vào ô trống tìm được.

![image](https://github.com/user-attachments/assets/03a9ead2-43e1-44d1-92a3-716dda4749cb)

Giải thích:
- Thêm `27`: `HashTable[1]` trống nên `HashTable[1] = 27`
- Thêm `42`: `HashTable[3]` trống nên `HashTable[3] = 42`
- Thêm `57`: `HashTable[5]` trống nên `HashTable[5] = 57`
- Thêm `84`: `HashTable[6]` trống nên `HashTable[6] = 84`
- Thêm `40`: `HashTable[1]` đã được ghi, tìm sang bên phải thấy `HashTable[2]` trống nên `HashTable[2] = 40`
- Thêm `13`: `HashTable[0]` trống nên `HashTable[0] = 13`
- Thêm `67`: `HashTable[2]` đã được ghi, tìm sang bên phải thấy `HashTable[4]` trống nên `HashTable[4] = 67`
- Thêm `86`: `HashTable[8]` trống nên `HashTable[8] = 86`
- Thêm `94`: `HashTable[3]` đã được ghi, tìm sang bên phải thấy `HashTable[7]` trống nên `HashTable[7] = 94`
- Thêm `20`: `HashTable[7]` đã được ghi, tìm sang bên phải thấy `HashTable[9]` trống nên `HashTable[9] = 20`
- Thêm `60`: `HashTable[8]` đã được ghi, tìm sang bên phải thấy `HashTable[10]` trống nên `HashTable[10] = 60`
- Thêm `10`: `HashTable[10]` đã được ghi, tìm sang bên phải thấy `HashTable[11]` trống nên `HashTable[11] = 10`
- Thêm `48`: `HashTable[9]` đã được ghi, tìm sang bên phải thấy `HashTable[12]` trống nên `HashTable[12] = 48`
</details>

## Câu 6 `(1,5 điểm)`
**a.** Hãy phân tích các điểm khác biệt chính giữa hai thuật toán sắp xếp nhanh quicksort và sắp xếp trộn merge sort.

**b.** Giả sử đã có hàm sắp xếp quicksort sử dụng giá trị chốt là phần tử cuối mảng. Hãy nêu giải pháp chỉnh sửa tối thiểu để thành hàm sắp xếp quicksort với giá trị chốt là phần tử ngẫu nhiên.

<details><summary>Bài giải</summary>

**a.**

- Thuật toán merge sort luôn chia mảng thành hai nửa có độ dài bằng nhau, sau đó đệ quy sắp xếp từng nửa rồi trộn hai nửa đã sắp xếp lại thành mảng hoàn chỉnh. Trong khi đó, thuật toán quicksort chọn một phần tử làm chốt, sau đó phân hoạch mảng sao cho các phần tử nhỏ hơn hoặc bằng chốt nằm bên trái và các phần tử lớn hơn chốt nằm bên phải rồi đệ quy sắp xếp hai phần.
- Thuật toán merge sort cần dùng mảng phụ còn thuật toán quicksort thì không.
- Thuật toán merge sort là thuật toán sắp xếp ổn định còn thuật toán quicksort thì không.

**b.**

Khi sử dụng thuật toán quicksort mà chọn giá trị chốt là phần tử cuối mảng cho một mảng được sắp xếp ngược lại, ví dụ sắp xếp tăng dần cho mảng `[5, 4, 3, 2, 1]`, ta sẽ rơi vào trường hợp xấu nhất của thuật toán này. Khi đó độ phức tạp thuật toán lên tới $\mathcal{O}(n^2)$. Để khắc phục điều này, ta xáo trộn ngẫu nhiên mảng trước khi đưa vào sắp xếp, khi đó giá trị chốt được chọn coi như là ngẫu nhiên.
</details>

## Câu 7 `(1,5 điểm)`
Cho đồ thị có hướng như hình dưới, trong đó các số là độ dài các cạnh tương ứng:

![image](https://github.com/user-attachments/assets/21356908-dea0-456a-abe3-373030a92c68)

**a.** Minh hoạ việc thực hiện thuật toán Bellman-Ford tính quãng đường đi ngắn nhất từ `S` tới tất cả các đỉnh còn lại.

**b.** Điều gì sẽ xảy ra nếu bổ sung thêm cạnh `D → B` có trọng số $-4$ vào đồ thị?

<details><summary>Bài giải</summary>

**a.**

Gọi $d(x)$ là tổng trọng số nhỏ nhất của đường đi từ đỉnh `S` tới đỉnh $x$.

| Vòng lặp | $d(S)$ | $d(A)$   | $d(B)$   | $d(C)$   | $d(D)$   |
| -------- | ------ | -------- | -------- | -------- | -------- |
| Ban đầu  | $0$    | $\infty$ | $\infty$ | $\infty$ | $\infty$ |
| $1$      | $0$    | $4$      | $\infty$ | $\infty$ | $\infty$ |
| $2$      | $0$    | $4$      | $7$      | $10$     | $\infty$ |
| $3$      | $0$    | $4$      | $7$      | $9$      | $11$     |
| $4$      | $0$    | $4$      | $7$      | $9$      | $10$     |

Sau khi chạy thuật toán Bellman-Ford, ta có $d(S)=0$, $d(A)=4$, $d(B)=7$, $d(C)=9$ và $d(D)=10$.

**b.**

Nếu thêm cạnh `D → B` có trọng số $-4$ vào đồ thị, đồ thị sẽ có chu trình âm (có tổng trọng số là $-1$). Khi đó không tồn tại định nghĩa đường đi ngắn nhất và không thể áp dụng thuật toán Bellman-Ford hay thuật toán nào khác để tìm đường đi ngắn nhất.

![image](https://github.com/user-attachments/assets/c3d70a2b-a758-4062-a0a1-177970819d16)
</details>

## Câu 8 `(1 điểm)`
Một khu vui chơi có $N$ địa điểm, giữa một số địa điểm có đường đi với cự li nào đó đã biết. Giả sử chỉ ở một số địa điểm biết trước có quầy bán nước. Hãy trình bày ý tưởng một thuật toán hiệu quả để xác định khoảng cách từ một địa điểm bất kỳ trong khu vui chơi đến địa điểm có quầy bán nước gần nhất.

<details><summary>Bài giải</summary>

Coi khu vui chơi là một đơn đồ thị vô hướng có $N$ đỉnh. Gọi $A$ là tập hợp các đỉnh mà tại đó có máy bán nước. Gọi đỉnh cần xác định khoảng cách đến đỉnh gần nhất có máy bán nước là $x$. Nếu $x \in A$ thì trả về $0$ luôn vì tại $x$ đã có máy bán nước. Ngược lại, vì đường đi không có trọng số âm nên ta sử dụng thuật toán Dijkstra để tìm đường đi ngắn nhất từ $x$ tới các đỉnh còn lại của đồ thị. Sau đó, ta duyệt từng đỉnh $y$ trong $A$ để tìm khoảng cách ngắn nhất từ $x$ đến $y$.
</details>
