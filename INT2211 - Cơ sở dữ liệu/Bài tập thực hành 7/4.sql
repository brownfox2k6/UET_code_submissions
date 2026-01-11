/*
Đưa ra danh sách các đơn hàng trong tháng 3/2003 (gồm orderDate,
requiredDate, Status) và tổng giá trị tiền của đơn hàng.
*/

SELECT
  o.orderDate,
  o.requiredDate,
  o.status,
  (od.quantityOrdered * od.priceEach) totalPrice
FROM classicmodels.orders o
JOIN classicmodels.orderdetails od ON o.orderNumber = od.orderNumber
WHERE MONTH(o.orderDate) = 3 AND YEAR(o.orderDate) = 2003;