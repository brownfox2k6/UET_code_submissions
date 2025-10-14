# Bài tập thực hành 2

<img width="496" height="754" alt="image" src="https://github.com/user-attachments/assets/bb7e68ed-e014-49ab-afc0-0a9557d564fb" />

## Yêu cầu:
1. Tạo lớp `LibraryItem` là lớp trừu tượng với các thuộc tính và phương thức như trong biểu đồ.
   - Phương thức `getInfo()` là phương thức trừu tượng
   - Phương thức `calculateLateFee()` là phương thức trừu tượng
   - Phương thức `toString()` trả về chuỗi theo định dạng: `"LibraryItem[title=Harry Potter,author=J.K. Rowling,year=1997,available=true]"`
 

2. Tạo lớp `Book` kế thừa từ `LibraryItem` với:
   - Thuộc tính `pages` là số trang
   - Constructor không tham số và constructor đầy đủ tham số
   - Bổ sung getter, setter cho thuộc tính `pages`
   - Override phương thức `getInfo()` trả về chuỗi theo định dạng: `"Book(Harry Potter by J.K. Rowling, 1997) - 320 pages"`
   - Override phương thức `calculateLateFee()` tính phí trả muộn theo công thức:
     - Phí cơ bản = 1000 đồng/ngày
     - Nếu sách có trên 500 trang: phí cơ bản * 1.5
     - Nếu sách có dưới 200 trang: phí cơ bản * 0.8
   - Override phương thức `toString()` trả về: `"Book[title=Harry Potter,author=J.K. Rowling,year=1997,available=true,pages=320]"`
   - Override phương thức `equals()` so sánh các thuộc tính title, author, year và pages
 

3. Tạo lớp `DVD` kế thừa từ `LibraryItem` với:
   - Thuộc tính `duration` là thời lượng phim (phút)
   - Constructor không tham số và constructor đầy đủ tham số
   - Bổ sung getter, setter cho thuộc tính `duration`
   - Override phương thức `getInfo()` trả về chuỗi theo định dạng: `"DVD(The Matrix by Wachowski Brothers, 1999) - 136 minutes"`
   - Override phương thức `calculateLateFee()` tính phí trả muộn theo công thức:
     - Phí cơ bản = 2000 đồng/ngày
     - Nếu phim dài trên 120 phút: phí cơ bản * 1.3
     - Nếu phim dưới 90 phút: phí cơ bản * 0.9
   - Override phương thức `toString()` trả về: `"DVD[title=The Matrix,author=Wachowski Brothers,year=1999,available=true,duration=136]"`
   - Override phương thức `equals()` so sánh các thuộc tính title, author, year và duration
 

4. Tạo lớp `Library` để quản lý danh sách các tài liệu:
   - Thuộc tính `items` kiểu `List<LibraryItem>`
   - Phương thức `addItem(LibraryItem item)` để thêm tài liệu vào thư viện
   - Phương thức `removeItem(LibraryItem item)` để xóa tài liệu khỏi thư viện
   - Phương thức `getItemsByAuthor(String author)` trả về danh sách các tài liệu cùng tác giả
   - Phương thức `getTotalLateFee(int days)` tính tổng phí trả muộn cho tất cả tài liệu
   - Phương thức `getInfo()` trả về thông tin tất cả tài liệu theo định dạng:
     ```
     Library Inventory:
     Book(Harry Potter by J.K. Rowling, 1997) - 320 pages
     DVD(The Matrix by Wachowski Brothers, 1999) - 136 minutes
     Book(Lord of the Rings by J.R.R. Tolkien, 1954) - 1178 pages
     ```
 

### Yêu cầu về định dạng:
- Không định nghĩa package trong các file java
- Đặt tất cả file .java trong cùng một thư mục
- Tên thư mục là mã số sinh viên