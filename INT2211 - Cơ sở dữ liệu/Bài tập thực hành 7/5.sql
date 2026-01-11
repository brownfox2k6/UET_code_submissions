/*
Đưa ra các thông tin về tên khách hàng, thời gian đặt hàng, số lượng đặt hàng,
dòng sản phẩm và tên sản phẩm của các đơn hàng được đặt và giao trong
năm 2003.
*/

SELECT
  c.customerName,
  o.orderDate,
  od.quantityOrdered,
  p.productLine,
  p.productName
FROM classicmodels.orders o
JOIN classicmodels.orderdetails od ON o.orderNumber = od.orderNumber
JOIN classicmodels.products p ON od.productCode = p.productCode
JOIN classicmodels.customers c ON o.customerNumber = c.customerNumber
WHERE YEAR(o.orderDate) = 2003 AND YEAR(o.shippedDate) = 2003;