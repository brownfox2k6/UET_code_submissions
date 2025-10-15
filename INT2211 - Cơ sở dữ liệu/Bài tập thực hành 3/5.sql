/*
Đưa ra danh sách các đơn hàng có ngày đặt
trong tháng 4 năm 2005 và có trạng thái là 'Shipped'
*/

SELECT * FROM classicmodels.orders
WHERE YEAR(orderDate) = 2005
AND MONTH(orderDate) = 4
AND status = 'Shipped';