# Bài tập thực hành 1

<img width="471" height="694" alt="image" src="https://github.com/user-attachments/assets/c962ea65-33cd-4c18-bd69-ce123c0dcc62" />

## Yêu cầu:
1. Tạo lớp `Vehicle` là lớp trừu tượng với các thuộc tính và phương thức như trong biểu đồ.
   - Phương thức `getInfo()` là phương thức trừu tượng
   - Phương thức `calculateValue()` là phương thức trừu tượng
   - Phương thức `toString()` trả về chuỗi theo định dạng: `"Vehicle[brand=Honda,model=Civic,year=2020]"`
 

2. Tạo lớp `Car` kế thừa từ `Vehicle` với:
   - Thuộc tính `seats` là số chỗ ngồi
   - Constructor không tham số và constructor đầy đủ tham số
   - Override phương thức `getInfo()` trả về chuỗi theo định dạng: `"Car(Honda Civic 2020) - 5 seats"`
   - Override phương thức `calculateValue()` tính giá trị xe theo công thức:
     - Nếu xe dưới 3 năm tuổi: `baseValue = 50000`
     - Nếu xe từ 3-7 năm tuổi: `baseValue = 30000`
     - Nếu xe trên 7 năm tuổi: `baseValue = 15000`
     - Giá trị cuối = `baseValue + (seats * 1000)`
   - Override phương thức `toString()` trả về: `"Car[brand=Honda,model=Civic,year=2020,seats=5]"`
   - Override phương thức `equals()` so sánh các thuộc tính brand, model, year và seats
 

3. Tạo lớp `Motorcycle` kế thừa từ `Vehicle` với:
   - Thuộc tính `engineSize` là dung tích động cơ (cc)
   - Constructor không tham số và constructor đầy đủ tham số
   - Override phương thức `getInfo()` trả về chuỗi theo định dạng: `"Motorcycle(Yamaha R1 2021) - 998cc"`
   - Override phương thức `calculateValue()` tính giá trị xe theo công thức:
     - Nếu xe dưới 3 năm tuổi: `baseValue = 20000`
     - Nếu xe từ 3-7 năm tuổi: `baseValue = 10000`
     - Nếu xe trên 7 năm tuổi: `baseValue = 5000`
     - Giá trị cuối = `baseValue + (engineSize * 10)`
   - Override phương thức `toString()` trả về: `"Motorcycle[brand=Yamaha,model=R1,year=2021,engineSize=998]"`
   - Override phương thức `equals()` so sánh các thuộc tính brand, model, year và engineSize
 

4. Tạo lớp `Garage` để quản lý danh sách các phương tiện:
   - Thuộc tính `vehicles` kiểu `List<Vehicle>`
   - Phương thức `addVehicle(Vehicle v)` để thêm phương tiện vào garage
   - Phương thức `removeVehicle(Vehicle v)` để xóa phương tiện khỏi garage
   - Phương thức `getVehiclesByBrand(String brand)` trả về danh sách các phương tiện cùng hãng
   - Phương thức `getTotalValue()` tính tổng giá trị các phương tiện trong garage
   - Phương thức `getInfo()` trả về thông tin tất cả phương tiện theo định dạng:
     ```
     Garage Inventory:
     Car(Honda Civic 2020) - 5 seats
     Motorcycle(Yamaha R1 2021) - 998cc
     Car(Toyota Camry 2019) - 5 seats
     ```

## Yêu cầu về định dạng:
- Không định nghĩa package trong các file java
- Đặt tất cả file .java trong cùng một thư mục
- Tên thư mục là mã số sinh viên
