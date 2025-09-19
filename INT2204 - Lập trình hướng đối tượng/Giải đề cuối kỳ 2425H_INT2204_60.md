# Giải đề thi cuối kỳ - Lập trình hướng đối tượng (2425H_INT2204_60)
- Thời gian làm bài: **90 phút**
- 4 câu

## Câu 1 `(3 điểm)` Trắc nghiệm
**1.** Khi ép kiểu một tham chiếu lớp cha (ví dụ `Animal`) sang kiểu lớp con (ví dụ `Dog`) mà đối tượng thực tế không thuộc kiểu lớp con đó (ví dụ là `Cat`), điều gì sẽ xảy ra?
- **a.** Chương trình sẽ biên dịch lỗi.
- **b.** Chương trình sẽ bị ngắt giữa chừng do lỗi runtime.
- **c.** Phương thức của lớp cha sẽ được gọi thay vì phương thức của lớp con.
- **d.** Đối tượng sẽ tự động được chuyển đổi sang kiểu lớp con mong muốn.

<details><summary><strong>Đáp án</strong></summary>

**b.** Chương trình sẽ bị ngắt giữa chừng do lỗi runtime.
</details>

---
**2.** Điều gì xảy ra nếu bạn không viết bất kỳ hàm khởi tạo (constructor) nào cho một lớp?
- **a.** Chương trình sẽ báo lỗi biên dịch.
- **b.** Trình biên dịch sẽ tự động cung cấp một hàm khởi tạo mặc định cho lớp đó.
- **c.** Đối tượng của lớp đó không thể được tạo.
- **d.** Bắt buộc phải sử dụng phương thức static để khởi tạo đối tượng.

<details><summary><strong>Đáp án</strong></summary>

**b.** Trình biên dịch sẽ tự động cung cấp một hàm khởi tạo mặc định cho lớp đó.
</details>

---
**3.** Xem xét hệ thống phân cấp lớp sau: `Animal` (lớp trừu tượng với phương thức trừu tượng `makeSound()`), `Dog` extends `Animal` (cài đặt `makeSound()` để in *"Woof"*), `Cat` extends `Animal` (cài đặt `makeSound()` để in *"Meow"*). Bạn có đoạn mã sau:
``` java
Animal[] pets = new Animal[2];
pets[0] = new Dog();
pets[1] = new Cat();
for (Animal pet : pets) {
  pet.makeSound();
}
```
Kết quả của đoạn mã này sẽ là gì và nguyên lý lập trình hướng đối tượng nào được thể hiện chính?
- **a.** Đoạn mã sẽ in *"Woof"* sau đó *"Meow"*, thể hiện đa hình và liên kết động.
- **b.** Đoạn mã sẽ in *"Woof"* sau đó *"Meow"*, thể hiện bao gói.
- **c.** Đoạn mã sẽ in *"Animal sound..."* hai lần, thể hiện nạp chồng phương thức.
- **d.** Đoạn mã sẽ gây ra lỗi biên dịch vì bạn không thể tạo một mảng của một lớp trừu tượng.

<details><summary><strong>Đáp án</strong></summary>

**a.** Đoạn mã sẽ in *"Woof"* sau đó *"Meow"*, thể hiện đa hình và liên kết động.
</details>

---
**4.** Đặc điểm nào sau đây là đúng nhất về lập trình tổng quát (generic programming)?
- **a.** Kiểu dữ liệu luôn phải được xác định tường minh khi định nghĩa lớp/giao diện/phương thức.
- **b.** Kiểu dữ liệu không cần xác định tường minh khi định nghĩa, nhưng phải xác định rõ khi sử dụng.
- **c.** Lập trình tổng quát chỉ áp dụng cho các lớp, không áp dụng cho giao diện hay phương thức.
- **d.** Luôn yêu cầu ép kiểu thủ công khi truy xuất dữ liệu.

<details><summary><strong>Đáp án</strong></summary>

**b.** Kiểu dữ liệu không cần xác định tường minh khi định nghĩa, nhưng phải xác định rõ khi sử dụng.
</details>

---
**5.** Khi một phương thức khởi tạo (constructor) gặp lỗi trong quá trình khởi tạo đối tượng, cách hợp lý nhất để thông báo lỗi trong Java là gì?
- **a.** Trả về một giá trị đặc biệt hoặc mã lỗi từ phương thức khởi tạo.
- **b.** Khởi tạo đối tượng với một trạng thái lỗi đặc biệt và yêu cầu mã chương trình kiểm tra trạng thái này.
- **c.** Ném một ngoại lệ (exception) từ bên trong phương thức khởi tạo.
- **d.** Phương thức khởi tạo không có cơ chế để thông báo lỗi trực tiếp vì chúng không trả về giá trị.

<details><summary><strong>Đáp án</strong></summary>

**c.** Ném một ngoại lệ (exception) từ bên trong phương thức khởi tạo.
</details>

---
**6.** Đặc điểm mặc định của các trường (hằng số) và phương thức được khai báo trong một giao diện (interface) Java là gì?
- **a.** Các trường là private và các phương thức là protected.
- **b.** Các trường là public static final và các phương thức là public abstract.
- **c.** Các trường là protected và các phương thức là abstract.
- **d.** Các trường và phương thức không có quyền truy cập mặc định.

<details><summary><strong>Đáp án</strong></summary>

**b.** Các trường là public static final và các phương thức là public abstract.
</details>

---
**7.** Phát biểu nào sau đây đúng về các quy tắc khi cài đè một phương thức của lớp cha?
- **a.** Danh sách tham số có thể khác nhau.
- **b.** Kiểu giá trị trả về có thể thay đổi tuỳ ý.
- **c.** Phương thức cài đè có thể ném bất kỳ loại ngoại lệ nào.
- **d.** Không được giảm quyền truy cập so với phiên bản của lớp cha.

<details><summary><strong>Đáp án</strong></summary>

**d.** Không được giảm quyền truy cập so với phiên bản của lớp cha.
</details>

---
**8.** Giả sử có hai danh sách trong Java được khai báo như sau:
``` java
List<Animal> animals = new ArrayList<>();
List<? extends Animal> wildAnimals = new ArrayList<>();
```
Phát biểu nào sau đây là đúng?
- **a.** Cả hai danh sách đều cho phép thêm bất kỳ đối tượng nào thuộc kiểu `Animal` hoặc lớp con của `Animal`.
- **b.** `animals` cho phép thêm đối tượng kiểu `Animal` hoặc lớp con của `Animal`, trong khi `wildAnimals` không cho phép thêm bất kỳ đối tượng nào (ngoại trừ `null`).
- **c.** `animals` chỉ cho phép thêm đối tượng kiểu `Animals`, còn `wildAnimals` cho phép thêm đối tượng thuộc bất kỳ lớp con nào của `Animal` nhưng không phải chính `Animal`.
- **d.** Tất cả đều sai.

<details><summary><strong>Đáp án</strong></summary>

**b.** `animals` cho phép thêm đối tượng kiểu `Animal` hoặc lớp con của `Animal`, trong khi `wildAnimals` không cho phép thêm bất kỳ đối tượng nào (ngoại trừ `null`).
</details>

---
**9.** Điền từ thích hợp vào các chỗ trống dưới đây
- **a.** Nếu một lớp chứa ít nhất một phương thức trừu tượng thì nó phải là lớp ___________
- **b.** Các lớp mà từ đó có thể tạo đối tượng được gọi là các lớp ___________
- **c.** Các phương thức không phải phương thức interface và không cung cấp cài đặt phương thức phải được khai báo với từ khoá ___________

<details><summary><strong>Đáp án</strong></summary>

**a.** trừu tượng, **b.** cụ thể, **c.** abstract
</details>

## Câu 2
**1.** Giải thích các phạm vi truy cập sau trong Java: package, public, private, protected. `(1 điểm)`

<details><summary><strong>Bài giải</strong></summary>

- package: chỉ các lớp trong cùng package mới truy cập được.
- public: có thể được truy cập từ mọi nơi.
- private: chỉ có thể được truy cập từ bên trong chính lớp đó.
- protected: có thể được truy cập bởi các lớp trong cùng package và các lớp con ngay cả khi khác package.
</details>

---
**2.** Cài đặt bằng Java một lớp `Student` (sinh viên) với thuộc tính `gpa` (điểm trung bình học tập). Điểm gpa luôn phải nằm trong khoảng từ $0.0$ đến $4.0$. Nếu có bất kỳ cố gắng nào để đặt giá trị gpa nằm ngoài khoảng này, giá trị đó phải bị bỏ qua. `(1 điểm)`

<details><summary><strong>Bài giải</strong></summary>

``` java
class Student {
  private double gpa;
  public double getGpa() {
    return gpa;
  }
  public void setGpa(double gpa) {
    if (gpa >= 0.0 && gpa <= 4.0) {
      this.gpa = gpa;
    }
  }
}
```
</details>

## Câu 3
**1.** Nêu ngữ cảnh sử dụng và chi tiết giải pháp của mẫu thiết kế Singleton. `(1 điểm)`

<details><summary><strong>Bài giải</strong></summary>

- Ngữ cảnh sử dụng: khi cần đảm bảo một lớp chỉ có duy nhất một đối tượng, ví dụ: lớp quản lý cấu hình, kết nối cơ sở dữ liệu, logger.

</details>

---
**2.** Trong một hệ thống quản lý người dùng, mỗi vai trò (ví dụ: "Admin", "User") chỉ được phép có một trình quản lý duy nhất để kiểm soát hành vi của vai trò đó. Hãy cài đặt bằng Java một phiên bản mở rộng của Singleton (theo hướng Multiton) để đáp ứng yêu cầu trên. `(1 điểm)`

## Câu 4
Một ngân hàng cho phép người dùng lập các loại tài khoản bao gồm: `NormalAccount`, `NickelNDime`, `Gambler`. Thông tin về mỗi tài khoản ngân hàng gồm có số dư hiện tại và số giao dịch đã thực hiện kể từ đầu tháng. Mỗi tài khoản cần đáp ứng các thao tác sau: gửi tiền, rút tiền, và lấy thông tin phí tài khoản trong tháng gần nhất. Phí tài khoản được tính tuỳ theo từng loại tại khoản. Loại `NormalAccount` tính phí hàng tháng là $10.000$ đồng. Loại `NickelNDime` tính phí theo số lần rút tiền, phí cho mỗi lần rút là $2.000$ đồng, cuối tháng mới thu. Loại `Gambler` không tính phí cuối tháng nhưng thu phí tại từng lần rút tiền theo xác suất như sau: Với xác suất $49\\%$, tài khoản không bị hụt đi đồng nào và giao dịch thành công miễn phí. Với xác suất $51\\%$, phí rút tiền bằng đúng số tiền rút được.

**1.** Vẽ biểu đồ thiết kế các lớp cho hệ thống trên sử dụng trừu tượng và thừa kế một cách hợp lý để tái sử dụng và tránh lặp code. `(2 điểm)`

**2.** Sử dụng Java, viết cài đặt cho phương thức gửi tiền và rút tiền, áp dụng cơ chế ném và xử lý ngoại lệ để đảm bảo: `(1 điểm)`
- Tất cả các thao tác gửi tiền và rút tiền đều kiểm tra số tiền $> 0$.
- Không cho phép rút số tiền vượt quá số dư hiện tại.

Gợi ý, tạo lớp ngoại lệ `InvalidAmountException` và `InsufficientFundsException`.