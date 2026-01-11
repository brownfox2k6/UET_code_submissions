/*
Trong bảng `customers`, hiển thị mã khách hàng, tên khách hàng và `shortCode`
được tạo bằng cách ghép 3 ký tự đầu của `customerName` với 3 số cuối của
customerNumber.
*/

SELECT
  customerNumber,
  customerName,
  CONCAT(SUBSTRING(customerName, 1, 3), SUBSTRING(customerNumber, -3)) shortCode
FROM classicmodels.customers;