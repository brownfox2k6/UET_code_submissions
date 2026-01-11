/*
Đưa ra danh sách các nhân viên và tổng số tiền hàng của các khách hàng mà
họ chăm sóc trong năm 2003, sắp xếp theo thứ tự tổng giảm dần.
*/

SELECT
  e.employeeNumber,
  e.lastName,
  e.firstName,
  SUM(od.quantityOrdered * od.priceEach) totalPaid
FROM classicmodels.employees e
JOIN classicmodels.customers c ON e.employeeNumber = c.salesRepEmployeeNumber
JOIN classicmodels.orders o ON c.customerNumber = o.customerNumber
JOIN classicmodels.orderdetails od ON o.orderNumber = od.orderNumber
GROUP BY e.employeeNumber
ORDER BY totalPaid DESC;