/*
Đưa ra các đơn đặt hàng trong tháng 5 năm 2005 và có ngày chuyển hàng đến
chưa xác định.
*/

SELECT * FROM classicmodels.orders
WHERE MONTH(orderDate) = 5
AND YEAR(orderDate) = 2005
AND shippedDate IS NULL;