/*
Lọc ra các đơn hàng có số ngày giao hàng > 10.
*/

SELECT
  orderNumber,
  orderDate,
  shippedDate,
  DATEDIFF(shippedDate, orderDate) deliveryDays
FROM classicmodels.orders
HAVING deliveryDays > 10;