/*
Đưa ra danh sách gồm tên khách hàng, state, mã nhân viên bán hàng, mã văn
phòng và state văn phòng thỏa mãn state của khách hàng trùng với state của
văn phòng của nhân viên bán hàng.
*/

SELECT
  c.customerName,
  c.state,
  e.employeeNumber,
  o.officeCode,
  o.state
FROM classicmodels.employees e
JOIN classicmodels.offices o ON e.officeCode = o.officeCode
JOIN classicmodels.customers c ON c.state = o.state;