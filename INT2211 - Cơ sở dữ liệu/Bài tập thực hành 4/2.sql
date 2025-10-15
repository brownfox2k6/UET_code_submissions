/*
Sử dụng BETWEEN để tìm các đơn hàng đã được chuyển trong khoảng thời gian
từ '10/1/2003' đến '10/3/2003'. Viết cách khác sử dụng toán tử AND.
*/

-- Solution 1
SELECT * FROM classicmodels.orders
WHERE shippedDate BETWEEN '2003-01-10' AND '2003-03-10';

-- Solution 2
SELECT * FROM classicmodels.orders
WHERE shippedDate >= '2003-01-10' AND shippedDate <= '2003-03-10';