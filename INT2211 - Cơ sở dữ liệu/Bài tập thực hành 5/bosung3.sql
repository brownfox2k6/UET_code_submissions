/*
Trong bảng orders, hiển thị orderNumber, orderDate, shippedDate
và cột DeliveryDays = số ngày giao hàng.
*/

SELECT
  orderNumber,
  orderDate,
  shippedDate,
  DATEDIFF(shippedDate, orderDate) deliveryDays
FROM classicmodels.orders;