/*
Đưa ra danh sách các khách hàng và số tiền hàng họ đã mua.
*/

SELECT
  c.customerNumber,
  c.customerName,
  SUM(od.quantityOrdered * od.priceEach) totalPaid
FROM classicmodels.customers c
JOIN classicmodels.orders o ON c.customerNumber = o.customerNumber
JOIN classicmodels.orderdetails od ON o.orderNumber = od.orderNumber
GROUP BY c.customerNumber;