/*
Đưa ra tên khách hàng đã đặt nhiều đơn hàng nhất.
*/

SELECT @cno := customerNumber FROM classicmodels.orders
GROUP BY customerNumber
ORDER BY COUNT(orderNumber) DESC
LIMIT 1;

SELECT customerName FROM classicmodels.customers
WHERE customerNumber = @cno;