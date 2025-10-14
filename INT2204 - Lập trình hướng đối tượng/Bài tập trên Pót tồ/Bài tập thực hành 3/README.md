# Bài tập thực hành 3

<img width="521" height="774" alt="image" src="https://github.com/user-attachments/assets/df9d7562-95f8-45a6-9712-ab537cb9440b" />

## Yêu cầu:

1. Tạo lớp `Employee` là lớp trừu tượng với các thuộc tính và phương thức như trong biểu đồ.

   - Phương thức `getInfo()` là phương thức trừu tượng

   - Phương thức `calculateSalary()` là phương thức trừu tượng

   - Phương thức `toString()` trả về chuỗi theo định dạng: `"Employee[name=John Doe,id=EMP001,baseSalary=5000.0,yearsOfExperience=3]"`

 

2. Tạo lớp `Developer` kế thừa từ `Employee` với:

   - Thuộc tính `programmingLanguage` là ngôn ngữ lập trình chính

   - Thuộc tính `projectsCompleted` là số dự án đã hoàn thành

   - Constructor không tham số và constructor đầy đủ tham số

   - Override phương thức `getInfo()` trả về chuỗi theo định dạng: `"Developer(John Doe - EMP001) - Java, 5 projects"`

   - Override phương thức `calculateSalary()` tính lương theo công thức:

     - Lương cơ bản = baseSalary

     - Thưởng kinh nghiệm = yearsOfExperience * 500

     - Thưởng dự án = projectsCompleted * 1000

     - Lương cuối cùng = baseSalary + thưởng kinh nghiệm + thưởng dự án

   - Override phương thức `toString()` trả về: `"Developer[name=John Doe,id=EMP001,baseSalary=5000.0,yearsOfExperience=3,programmingLanguage=Java,projectsCompleted=5]"`

   - Override phương thức `equals()` so sánh các thuộc tính name, id, yearsOfExperience, programmingLanguage và projectsCompleted

 

3. Tạo lớp `Manager` kế thừa từ `Employee` với:

   - Thuộc tính `teamSize` là số nhân viên trong team

   - Thuộc tính `department` là phòng ban quản lý

   - Constructor không tham số và constructor đầy đủ tham số

   - Override phương thức `getInfo()` trả về chuỗi theo định dạng: `"Manager(Jane Smith - EMP002) - IT Department, Team of 10"`

   - Override phương thức `calculateSalary()` tính lương theo công thức:

     - Lương cơ bản = baseSalary

     - Thưởng kinh nghiệm = yearsOfExperience * 1000

     - Thưởng quản lý = teamSize * 200

     - Lương cuối cùng = baseSalary + thưởng kinh nghiệm + thưởng quản lý

   - Override phương thức `toString()` trả về: `"Manager[name=Jane Smith,id=EMP002,baseSalary=8000.0,yearsOfExperience=5,teamSize=10,department=IT]"`

   - Override phương thức `equals()` so sánh các thuộc tính name, id, yearsOfExperience, teamSize và department

 

4. Tạo lớp `Company` để quản lý danh sách nhân viên:

   - Thuộc tính `employees` kiểu `List<Employee>`

   - Phương thức `addEmployee(Employee e)` để thêm nhân viên vào công ty

   - Phương thức `removeEmployee(Employee e)` để xóa nhân viên khỏi công ty

   - Phương thức `getEmployeesByDepartment(String department)` trả về danh sách nhân viên cùng phòng ban

   - Phương thức `getTotalSalary()` tính tổng lương của tất cả nhân viên

   - Phương thức `getInfo()` trả về thông tin tất cả nhân viên theo định dạng:

     ```

     Company Employees:

     Developer(John Doe - EMP001) - Java, 5 projects

     Manager(Jane Smith - EMP002) - IT Department, Team of 10

     Developer(Mike Johnson - EMP003) - Python, 3 projects

     ```

### Yêu cầu về định dạng:

- Không định nghĩa package trong các file java

- Đặt tất cả file .java trong cùng một thư mục

- Tên thư mục là mã số sinh viên