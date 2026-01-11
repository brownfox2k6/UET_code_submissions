/*
Đưa ra danh sách các nhân viên và văn phòng nơi họ làm việc.
*/

SELECT
  e.employeeNumber,
  e.lastName,
  e.firstName,
  o.officeCode,
  o.addressLine1,
  o.addressLine2
FROM classicmodels.employees e
JOIN classicmodels.offices o ON e.officeCode = o.officeCode;